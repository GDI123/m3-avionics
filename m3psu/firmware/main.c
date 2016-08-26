/*
 ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#include <stdlib.h>

#include "ch.h"
#include "hal.h"

#include "config.h"
#include "powermanager.h"
#include "chargecontroller.h"
#include "smbus.h"
#include "m3can.h"

static THD_WORKING_AREA(waPowerManager, 1024);
static THD_WORKING_AREA(waChargeController, 1024);
static THD_WORKING_AREA(waChargerWatchdog, 512);
//static THD_WORKING_AREA(waPowerAlert, 512);

void enable_internal_power(void){
  palClearLine(LINE_EN_INT_PWR);
}
void disable_internal_power(void){
  palSetLine(LINE_EN_INT_PWR);
}

void enable_external_power(void){
  palClearLine(LINE_EN_EXT_PWR);
}
void disable_external_power(void){
  palSetLine(LINE_EN_EXT_PWR);
}

void enable_pyros(void){
  palSetLine(LINE_EN_PYRO);
}
void disable_pyros(void){
  palClearLine(LINE_EN_PYRO);
}

void switch_to_external_power(void){
  enable_external_power();
  chThdSleepMilliseconds(5);
  ChargeController_enable_charger();
}

void switch_to_internal_power(void){
  ChargeController_disable_charger();
  chThdSleepMilliseconds(5);
  disable_external_power();
}

void can_recv(uint16_t msg_id, bool rtr, uint8_t *data, uint8_t datalen){
  (void)rtr;

  if(msg_id == CAN_MSG_ID_M3PSU_TOGGLE_PYROS){
    if(datalen >= 1){
      if(data[0] == 0){
        disable_pyros();
      }else if(data[0] == 1){
        enable_pyros();
      }
    }
  }else if(msg_id == CAN_MSG_ID_M3PSU_TOGGLE_CHANNEL){
    if(datalen >= 2){
      if(data[0] == 1){
        PowerManager_switch_on(data[1]);
      }else if(data[0] == 0){
        PowerManager_switch_off(data[1]);
      }
    }
  }else if(msg_id == CAN_MSG_ID_M3PSU_TOGGLE_CHARGER){
    if(datalen >= 1){
      if(data[0] == 1){
        ChargeController_enable_charger();
      }else if(data[0] == 0){
        ChargeController_disable_charger();
      }
    }
  }else if(msg_id == CAN_MSG_ID_M3PSU_TOGGLE_BALANCE){
    if(datalen >= 1){
      if(data[0] == 1){
        ChargeController_enable_balancing();
      }else if(data[0] == 0){
        ChargeController_disable_balancing();
      }
    }
  }
}

int main(void) {

  halInit();
  chSysInit();

  enable_pyros();

  enable_internal_power();

  adcStart(&ADC_DRIVER, NULL); // STM32F4 has no ADCConfig
  smbus_init();
  can_init();

  PowerManager_init();
  ChargeController_init();

  switch_to_external_power();


  //chThdCreateStatic(waPowerAlert, sizeof(waPowerAlert), NORMALPRIO + 3,
  //                  powermanager_alert, NULL);
  chThdCreateStatic(waPowerManager, sizeof(waPowerManager), NORMALPRIO + 4,
                    powermanager_thread, NULL);

  chThdCreateStatic(waChargeController, sizeof(waChargeController), NORMALPRIO + 2,
                    chargecontroller_thread, NULL);
  chThdCreateStatic(waChargerWatchdog, sizeof(waChargerWatchdog), NORMALPRIO + 1,
                    charger_watchdog_thread, NULL);

  // All done, go to sleep forever
  chThdSleep(TIME_INFINITE);

  return 0;
}
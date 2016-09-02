/* EZRadioPro Definitions ===================================================*/


/* All constants here are from the EZRadioPRO_REVC2/Si4460/revC2A documents. */

/* EZRadioPRO API Commands --------------------------------------------------*/
#define EZRP_POWER_UP               0x02

#define EZRP_NOP                    0x00
#define EZRP_PART_INFO              0x01
#define EZRP_FUNC_INFO              0x10
#define EZRP_SET_PROPERTY           0x11
#define EZRP_GET_PROPERTY           0x12
#define EZRP_GPIO_PIN_CFG           0x13
#define EZRP_FIFO_INFO              0x15
#define EZRP_GET_INT_STATUS         0x20
#define EZRP_REQUEST_DEVICE_STATE   0x33
#define EZRP_CHANGE_STATE           0x34
#define EZRP_READ_CMD_BUFF          0x44
#define EZRP_FRR_A_READ             0x50
#define EZRP_FRR_B_READ             0x51
#define EZRP_FRR_C_READ             0x53
#define EZRP_FRR_D_READ             0x57

#define EZRP_IRCAL                  0x17
#define EZRP_IRCAL_MANUAL           0x1A

#define EZRP_START_TX               0x31
#define EZRP_TX_HOP                 0x37
#define EZRP_WRITE_TX_FIFO          0x66

#define EZRP_PACKET_INFO            0x16
#define EZRP_GET_MODEM_STATUS       0x22
#define EZRP_START_RX               0x32
#define EZRP_RX_HOP                 0x36
#define EZRP_READ_RX_FIFO           0x77

#define EZRP_GET_ADC_READING        0x14
#define EZRP_GET_PH_STATUS          0x21
#define EZRP_GET_CHIP_STATUS        0x23


/* EZRadioPro Property Groups -----------------------------------------------*/
#define EZRP_PROP_GLOBAL            0x00
#define EZRP_PROP_INT_CTL           0x01
#define EZRP_PROP_FRR_CTL           0x02
#define EZRP_PROP_PREAMBLE          0x10
#define EZRP_PROP_SYNC              0x11
#define EZRP_PROP_PKT               0x12
#define EZRP_PROP_MODEM             0x20
#define EZRP_PROP_MODEM_CHFLT       0x21
#define EZRP_PROP_PA                0x22
#define EZRP_PROP_SYNTH             0x23
#define EZRP_PROP_MATCH             0x30
#define EZRP_PROP_FREQ_CONTROL      0x40
#define EZRP_PROP_RX_HOP            0x50
#define EZRP_PROP_PTI               0xF0


/* EZRadioPro Property Numbers ----------------------------------------------*/
#define EZRP_PROP_GLOBAL_XO_TUNE                    0x00
#define EZRP_PROP_GLOBAL_CLK_CFG                    0x01
#define EZRP_PROP_GLOBAL_LOW_BATT_THRESH            0x02
#define EZRP_PROP_GLOBAL_CONFIG                     0x03
#define EZRP_PROP_GLOBAL_WUT_CONFIG                 0x04
#define EZRP_PROP_GLOBAL_WUT_M0                     0x05
#define EZRP_PROP_GLOBAL_WUT_M1                     0x06
#define EZRP_PROP_GLOBAL_WUT_R                      0x07
#define EZRP_PROP_GLOBAL_WUT_LDC                    0x08
#define EZRP_PROP_GLOBAL_WUT_CAL                    0x09

#define EZRP_PROP_INT_CTL_ENABLE                    0x00
#define EZRP_PROP_INT_CTL_PH_ENABLE                 0x01
#define EZRP_PROP_INT_CTL_MODEM_ENABLE              0x02
#define EZRP_PROP_INT_CTL_CHIP_ENABLE               0x03

#define EZRP_PROP_FRR_CTL_A_MODE                    0x00
#define EZRP_PROP_FRR_CTL_B_MODE                    0x01
#define EZRP_PROP_FRR_CTL_C_MODE                    0x02
#define EZRP_PROP_FRR_CTL_D_MODE                    0x03

#define EZRP_PROP_PREAMBLE_TX_LENGTH                0x00
#define EZRP_PROP_PREAMBLE_CONFIG_STD_1             0x01
#define EZRP_PROP_PREAMBLE_CONFIG_NSTD              0x02
#define EZRP_PROP_PREAMBLE_CONFIG_STD_2             0x03
#define EZRP_PROP_PREAMBLE_CONFIG                   0x04
#define EZRP_PROP_PREAMBLE_PATTERN0                 0x05
#define EZRP_PROP_PREAMBLE_PATTERN1                 0x06
#define EZRP_PROP_PREAMBLE_PATTERN2                 0x07
#define EZRP_PROP_PREAMBLE_PATTERN3                 0x08
#define EZRP_PROP_PREAMBLE_POSTAMBLE_CONFIG         0x09
#define EZRP_PROP_PREAMBLE_POSTAMBLE_PATTERN0       0x0a
#define EZRP_PROP_PREAMBLE_POSTAMBLE_PATTERN1       0x0b
#define EZRP_PROP_PREAMBLE_POSTAMBLE_PATTERN2       0x0c
#define EZRP_PROP_PREAMBLE_POSTAMBLE_PATTERN3       0x0d

#define EZRP_PROP_SYNC_CONFIG                       0x00
#define EZRP_PROP_SYNC_BITS0                        0x01
#define EZRP_PROP_SYNC_BITS1                        0x02
#define EZRP_PROP_SYNC_BITS2                        0x03
#define EZRP_PROP_SYNC_BITS3                        0x04
#define EZRP_PROP_SYNC_CONFIG2                      0x05

#define EZRP_PROP_PKT_CRC_CONFIG                    0x00
#define EZRP_PROP_PKT_WHT_POLY0                     0x01
#define EZRP_PROP_PKT_WHT_POLY1                     0x02
#define EZRP_PROP_PKT_WHT_SEED0                     0x03
#define EZRP_PROP_PKT_WHT_SEED1                     0x04
#define EZRP_PROP_PKT_WHT_BIT_NUM                   0x05
#define EZRP_PROP_PKT_CONFIG1                       0x06
#define EZRP_PROP_PKT_CONFIG2                       0x07
#define EZRP_PROP_PKT_LEN                           0x08
#define EZRP_PROP_PKT_LEN_FIELD_SOURCE              0x09
#define EZRP_PROP_PKT_LEN_ADJUST                    0x0a
#define EZRP_PROP_PKT_TX_THRESHOLD                  0x0b
#define EZRP_PROP_PKT_RX_THRESHOLD                  0x0c
#define EZRP_PROP_PKT_FIELD_1_LENGTH0               0x0d
#define EZRP_PROP_PKT_FIELD_1_LENGTH1               0x0e
#define EZRP_PROP_PKT_FIELD_1_CONFIG                0x0f
#define EZRP_PROP_PKT_FIELD_1_CRC_CONFIG            0x10
#define EZRP_PROP_PKT_FIELD_2_LENGTH0               0x11
#define EZRP_PROP_PKT_FIELD_2_LENGTH1               0x12
#define EZRP_PROP_PKT_FIELD_2_CONFIG                0x13
#define EZRP_PROP_PKT_FIELD_2_CRC_CONFIG            0x14
#define EZRP_PROP_PKT_FIELD_3_LENGTH0               0x15
#define EZRP_PROP_PKT_FIELD_3_LENGTH1               0x16
#define EZRP_PROP_PKT_FIELD_3_CONFIG                0x17
#define EZRP_PROP_PKT_FIELD_3_CRC_CONFIG            0x18
#define EZRP_PROP_PKT_FIELD_4_LENGTH0               0x19
#define EZRP_PROP_PKT_FIELD_4_LENGTH1               0x1a
#define EZRP_PROP_PKT_FIELD_4_CONFIG                0x1b
#define EZRP_PROP_PKT_FIELD_4_CRC_CONFIG            0x1c
#define EZRP_PROP_PKT_FIELD_5_LENGTH0               0x1d
#define EZRP_PROP_PKT_FIELD_5_LENGTH1               0x1e
#define EZRP_PROP_PKT_FIELD_5_CONFIG                0x1f
#define EZRP_PROP_PKT_FIELD_5_CRC_CONFIG            0x20
#define EZRP_PROP_PKT_RX_FIELD_1_LENGTH0            0x21
#define EZRP_PROP_PKT_RX_FIELD_1_LENGTH1            0x22
#define EZRP_PROP_PKT_RX_FIELD_1_CONFIG             0x23
#define EZRP_PROP_PKT_RX_FIELD_1_CRC_CONFIG         0x24
#define EZRP_PROP_PKT_RX_FIELD_2_LENGTH0            0x25
#define EZRP_PROP_PKT_RX_FIELD_2_LENGTH1            0x26
#define EZRP_PROP_PKT_RX_FIELD_2_CONFIG             0x27
#define EZRP_PROP_PKT_RX_FIELD_2_CRC_CONFIG         0x28
#define EZRP_PROP_PKT_RX_FIELD_3_LENGTH0            0x29
#define EZRP_PROP_PKT_RX_FIELD_3_LENGTH1            0x2a
#define EZRP_PROP_PKT_RX_FIELD_3_CONFIG             0x2b
#define EZRP_PROP_PKT_RX_FIELD_3_CRC_CONFIG         0x2c
#define EZRP_PROP_PKT_RX_FIELD_4_LENGTH0            0x2d
#define EZRP_PROP_PKT_RX_FIELD_4_LENGTH1            0x2e
#define EZRP_PROP_PKT_RX_FIELD_4_CONFIG             0x2f
#define EZRP_PROP_PKT_RX_FIELD_4_CRC_CONFIG         0x30
#define EZRP_PROP_PKT_RX_FIELD_5_LENGTH0            0x31
#define EZRP_PROP_PKT_RX_FIELD_5_LENGTH1            0x32
#define EZRP_PROP_PKT_RX_FIELD_5_CONFIG             0x33
#define EZRP_PROP_PKT_RX_FIELD_5_CRC_CONFIG         0x34
#define EZRP_PROP_PKT_CRC_SEED0                     0x36
#define EZRP_PROP_PKT_CRC_SEED1                     0x37
#define EZRP_PROP_PKT_CRC_SEED2                     0x38
#define EZRP_PROP_PKT_CRC_SEED3                     0x39

#define EZRP_PROP_MODEM_MOD_TYPE                    0x00
#define EZRP_PROP_MODEM_MAP_CONTROL                 0x01
#define EZRP_PROP_MODEM_DSM_CTRL                    0x02
#define EZRP_PROP_MODEM_DATA_RATE0                  0x03
#define EZRP_PROP_MODEM_DATA_RATE1                  0x04
#define EZRP_PROP_MODEM_DATA_RATE2                  0x05
#define EZRP_PROP_MODEM_TX_NCO_MODE0                0x06
#define EZRP_PROP_MODEM_TX_NCO_MODE1                0x07
#define EZRP_PROP_MODEM_TX_NCO_MODE2                0x08
#define EZRP_PROP_MODEM_TX_NCO_MODE3                0x09
#define EZRP_PROP_MODEM_FREQ_DEV0                   0x0a
#define EZRP_PROP_MODEM_FREQ_DEV1                   0x0b
#define EZRP_PROP_MODEM_FREQ_DEV2                   0x0c
#define EZRP_PROP_MODEM_FREQ_OFFSET0                0x0d
#define EZRP_PROP_MODEM_FREQ_OFFSET1                0x0e
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_8           0x0f
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_7           0x10
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_6           0x11
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_5           0x12
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_4           0x13
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_3           0x14
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_2           0x15
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_1           0x16
#define EZRP_PROP_MODEM_TX_FILTER_COEFF_0           0x17
#define EZRP_PROP_MODEM_TX_RAMP_DELAY               0x18
#define EZRP_PROP_MODEM_MDM_CTRL                    0x19
#define EZRP_PROP_MODEM_IF_CONTROL                  0x1a
#define EZRP_PROP_MODEM_IF_FREQ0                    0x1b
#define EZRP_PROP_MODEM_IF_FREQ1                    0x1c
#define EZRP_PROP_MODEM_IF_FREQ2                    0x1d
#define EZRP_PROP_MODEM_DECIMATION_CFG1             0x1e
#define EZRP_PROP_MODEM_DECIMATION_CFG0             0x1f
#define EZRP_PROP_MODEM_DECIMATION_CFG2             0x20
#define EZRP_PROP_MODEM_IFPKD_THRESHOLDS            0x21
#define EZRP_PROP_MODEM_BCR_OSR0                    0x22
#define EZRP_PROP_MODEM_BCR_OSR1                    0x23
#define EZRP_PROP_MODEM_BCR_NCO_OFFSET0             0x24
#define EZRP_PROP_MODEM_BCR_NCO_OFFSET1             0x25
#define EZRP_PROP_MODEM_BCR_NCO_OFFSET2             0x26
#define EZRP_PROP_MODEM_BCR_GAIN0                   0x27
#define EZRP_PROP_MODEM_BCR_GAIN1                   0x28
#define EZRP_PROP_MODEM_BCR_GEAR                    0x29
#define EZRP_PROP_MODEM_BCR_MISC1                   0x2a
#define EZRP_PROP_MODEM_BCR_MISC0                   0x2b
#define EZRP_PROP_MODEM_AFC_GEAR                    0x2c
#define EZRP_PROP_MODEM_AFC_WAIT                    0x2d
#define EZRP_PROP_MODEM_AFC_GAIN0                   0x2e
#define EZRP_PROP_MODEM_AFC_GAIN1                   0x2f
#define EZRP_PROP_MODEM_AFC_LIMITER0                0x30
#define EZRP_PROP_MODEM_AFC_LIMITER1                0x31
#define EZRP_PROP_MODEM_AFC_MISC                    0x32
#define EZRP_PROP_MODEM_AFC_ZIFOFF                  0x33
#define EZRP_PROP_MODEM_ADC_CTRL                    0x34
#define EZRP_PROP_MODEM_AGC_CONTROL                 0x35
#define EZRP_PROP_MODEM_AGC_WINDOW_SIZE             0x38
#define EZRP_PROP_MODEM_AGC_RFPD_DECAY              0x39
#define EZRP_PROP_MODEM_AGC_IFPD_DECAY              0x3a
#define EZRP_PROP_MODEM_FSK4_GAIN1                  0x3b
#define EZRP_PROP_MODEM_FSK4_GAIN0                  0x3c
#define EZRP_PROP_MODEM_FSK4_TH0                    0x3d
#define EZRP_PROP_MODEM_FSK4_TH1                    0x3e
#define EZRP_PROP_MODEM_FSK4_MAP                    0x3f
#define EZRP_PROP_MODEM_OOK_PDTC                    0x40
#define EZRP_PROP_MODEM_OOK_BLOPK                   0x41
#define EZRP_PROP_MODEM_OOK_CNT1                    0x42
#define EZRP_PROP_MODEM_OOK_MISC                    0x43
#define EZRP_PROP_MODEM_RAW_CONTROL                 0x45
#define EZRP_PROP_MODEM_RAW_EYE0                    0x46
#define EZRP_PROP_MODEM_RAW_EYE1                    0x47
#define EZRP_PROP_MODEM_ANT_DIV_MODE                0x48
#define EZRP_PROP_MODEM_ANT_DIV_CONTROL             0x49
#define EZRP_PROP_MODEM_RSSI_THRESH                 0x4a
#define EZRP_PROP_MODEM_RSSI_JUMP_THRESH            0x4b
#define EZRP_PROP_MODEM_RSSI_CONTROL                0x4c
#define EZRP_PROP_MODEM_RSSI_CONTROL2               0x4d
#define EZRP_PROP_MODEM_RSSI_COMP                   0x4e
#define EZRP_PROP_MODEM_RAW_SEARCH2                 0x50
#define EZRP_PROP_MODEM_CLKGEN_BAND                 0x51
#define EZRP_PROP_MODEM_SPIKE_DET                   0x54
#define EZRP_PROP_MODEM_ONE_SHOT_AFC                0x55
#define EZRP_PROP_MODEM_RSSI_HYSTERESIS             0x56
#define EZRP_PROP_MODEM_RSSI_MUTE                   0x57
#define EZRP_PROP_MODEM_FAST_RSSI_DELAY             0x58
#define EZRP_PROP_MODEM_PSM0                        0x59
#define EZRP_PROP_MODEM_PSM1                        0x5a
#define EZRP_PROP_MODEM_DSA_CTRL1                   0x5b
#define EZRP_PROP_MODEM_DSA_CTRL2                   0x5c
#define EZRP_PROP_MODEM_DSA_QUAL                    0x5d
#define EZRP_PROP_MODEM_DSA_RSSI                    0x5e
#define EZRP_PROP_MODEM_DSA_MISC                    0x5f

#define EZRP_PROP_PA_MODE                           0x00
#define EZRP_PROP_PA_PWR_LVL                        0x01
#define EZRP_PROP_PA_BIAS_CLKDUTY                   0x02
#define EZRP_PROP_PA_TC                             0x03
#define EZRP_PROP_PA_RAMP_EX                        0x04
#define EZRP_PROP_PA_RAMP_DOWN_DELAY                0x05
#define EZRP_PROP_PA_DIG_PWR_SEQ_CONFIG             0x06

#define EZRP_PROP_SYNTH_PFDCP_CPFF                  0x00
#define EZRP_PROP_SYNTH_PFDCP_CPINT                 0x01
#define EZRP_PROP_SYNTH_VCO_KV                      0x02
#define EZRP_PROP_SYNTH_LPFILT3                     0x03
#define EZRP_PROP_SYNTH_LPFILT2                     0x04
#define EZRP_PROP_SYNTH_LPFILT1                     0x05
#define EZRP_PROP_SYNTH_LPFILT0                     0x06
#define EZRP_PROP_SYNTH_VCO_KVCAL                   0x07

#define EZRP_PROP_MATCH_VALUE_1                     0x00
#define EZRP_PROP_MATCH_MASK_1                      0x01
#define EZRP_PROP_MATCH_CTRL_1                      0x02
#define EZRP_PROP_MATCH_VALUE_2                     0x03
#define EZRP_PROP_MATCH_MASK_2                      0x04
#define EZRP_PROP_MATCH_CTRL_2                      0x05
#define EZRP_PROP_MATCH_VALUE_3                     0x06
#define EZRP_PROP_MATCH_MASK_3                      0x07
#define EZRP_PROP_MATCH_CTRL_3                      0x08
#define EZRP_PROP_MATCH_VALUE_4                     0x09
#define EZRP_PROP_MATCH_MASK_4                      0x0a
#define EZRP_PROP_MATCH_CTRL_4                      0x0b

#define EZRP_PROP_FREQ_CONTROL_INTE                 0x00
#define EZRP_PROP_FREQ_CONTROL_FRAC0                0x01
#define EZRP_PROP_FREQ_CONTROL_FRAC1                0x02
#define EZRP_PROP_FREQ_CONTROL_FRAC2                0x03
#define EZRP_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE0   0x04
#define EZRP_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE1   0x05
#define EZRP_PROP_FREQ_CONTROL_W_SIZE               0x06
#define EZRP_PROP_FREQ_CONTROL_VCOCNT_RX_ADJ        0x07

#define EZRP_PROP_RX_HOP_CONTROL                    0x00
#define EZRP_PROP_RX_HOP_TABLE_SIZE                 0x01

#define EZRP_PROP_PTI_CTL                           0x00
#define EZRP_PROP_PTI_BAUD0                         0x01
#define EZRP_PROP_PTI_BAUD1                         0x02
#define EZRP_PROP_PTI_LOG_EN                        0x03

/* States -------------------------------------------------------------------*/
#define EZRP_STATE_SLEEP                            0x01
#define EZRP_STATE_SPI_ACTIVE                       0x02
#define EZRP_STATE_READY                            0x03
#define EZRP_STATE_READY2                           0x04
#define EZRP_STATE_TX_TUNE                          0x05
#define EZRP_STATE_RX_TUNE                          0x06
#define EZRP_STATE_TX                               0x07
#define EZRP_STATE_RX                               0x08

/* Bits ---------------------------------------------------------------------*/
#define EZRP_INT_STATUS_CHIP_INT                            (1<<2)
#define EZRP_INT_STATUS_MODEM_INT                           (1<<1)
#define EZRP_INT_STATUS_PH_INT                              (1<<0)

#define EZRP_MODEM_STATUS_RSSI_LATCH                        (1<<7)
#define EZRP_MODEM_STATUS_POSTAMBLE_DETECT                  (1<<6)
#define EZRP_MODEM_STATUS_INVALID_SYNC                      (1<<5)
#define EZRP_MODEM_STATUS_RSSI_JUMP                         (1<<4)
#define EZRP_MODEM_STATUS_RSSI                              (1<<3)
#define EZRP_MODEM_STATUS_INVALID_PREAMBLE                  (1<<2)
#define EZRP_MODEM_STATUS_PREAMBLE_DETECT                   (1<<1)
#define EZRP_MODEM_STATUS_SYNC_DETECT                       (1<<0)

#define EZRP_PH_STATUS_FILTER_MATCH                         (1<<7)
#define EZRP_PH_STATUS_FILTER_MISS                          (1<<6)
#define EZRP_PH_STATUS_PACKET_SENT                          (1<<5)
#define EZRP_PH_STATUS_PACKET_RX                            (1<<4)
#define EZRP_PH_STATUS_CRC_ERROR                            (1<<3)
#define EZRP_PH_STATUS_ALT_CRC_ERROR                        (1<<2)
#define EZRP_PH_STATUS_TX_FIFO_ALMOST_EMPTY                 (1<<1)
#define EZRP_PH_STATUS_RX_FIFO_ALMOST_FULL                  (1<<0)

#define EZRP_CHIP_STATUS_CAL                                (1<<6)
#define EZRP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR      (1<<5)
#define EZRP_CHIP_STATUS_STATE_CHANGE                       (1<<4)
#define EZRP_CHIP_STATUS_CMD_ERROR                          (1<<3)
#define EZRP_CHIP_STATUS_CHIP_READY                         (1<<2)
#define EZRP_CHIP_STATUS_LOW_BATT                           (1<<1)
#define EZRP_CHIP_STATUS_WUT                                (1<<0)

#define EZRP_START_TX_TXCOMPLETE_STATE(x)                   (x<<4)
#define EZRP_START_TX_UPDATE_USE                            (0<<3)
#define EZRP_START_TX_UPDATE_UPDATE                         (1<<3)
#define EZRP_START_TX_RETRANSMIT_NEW                        (0<<2)
#define EZRP_START_TX_RETRANSMIT_RETRANSMIT                 (1<<2)
#define EZRP_START_TX_START_IMMEDIATE                       (0<<0)
#define EZRP_START_TX_START_WUT                             (1<<0)

#define EZRP_GLOBAL_CONFIG_RESERVED                         (1<<6)
#define EZRP_GLOBAL_CONFIG_SEQUENCER_MODE_GUARANTEED        (0<<5)
#define EZRP_GLOBAL_CONFIG_SEQUENCER_MODE_FAST              (1<<5)
#define EZRP_GLOBAL_CONFIG_FIFO_MODE_SPLIT_FIFO             (0<<4)
#define EZRP_GLOBAL_CONFIG_FIFO_MODE_HALF_DUPLEX_FIFO       (1<<4)
#define EZRP_GLOBAL_CONFIG_PROTOCOL_GENERIC                 (0<<1)
#define EZRP_GLOBAL_CONFIG_PROTOCOL_IE154G                  (1<<1)
#define EZRP_GLOBAL_CONFIG_POWER_MODE_HIGH_PERF             (0<<0)
#define EZRP_GLOBAL_CONFIG_POWER_MODE_LOW_POWER             (1<<0)

#define EZRP_PREAMBLE_CONFIG_STD_1_SKIP_SYNC_TIMEOUT_DISABLE    (0<<7)
#define EZRP_PREAMBLE_CONFIG_STD_1_SKIP_SYNC_TIMEOUT_ENABLE     (1<<7)
#define EZRP_PREAMBLE_CONFIG_STD_1_RX_THRESH(x)                 (x)

#define EZRP_PREAMBLE_CONFIG_STD_2_RX_PREAMBLE_TIMEOUT_EXTEND(x)    (x<<4)
#define EZRP_PREAMBLE_CONFIG_STD_2_RX_PREAMBLE_TIMEOUT(x)           (x)

#define EZRP_PREAMBLE_CONFIG_RX_PREAM_SRC_STANDARD_PREAM            (0<<7)
#define EZRP_PREAMBLE_CONFIG_RX_PREAM_SRC_DSA_ONLY                  (1<<7)
#define EZRP_PREAMBLE_CONFIG_PREAM_FIRST_1_OR_0_FIRST_0             (0<<5)
#define EZRP_PREAMBLE_CONFIG_PREAM_FIRST_1_OR_0_FIRST_1             (1<<5)
#define EZRP_PREAMBLE_CONFIG_LENGTH_CONFIG_NIBBLE                   (0<<4)
#define EZRP_PREAMBLE_CONFIG_LENGTH_CONFIG_BYTE                     (1<<4)
#define EZRP_PREAMBLE_CONFIG_MAN_CONST_NO_CON                       (0<<3)
#define EZRP_PREAMBLE_CONFIG_MAN_CONST_CONST                        (1<<3)
#define EZRP_PREAMBLE_CONFIG_MAN_ENABLE_NO_MAN                      (0<<2)
#define EZRP_PREAMBLE_CONFIG_MAN_ENABLE_EN_MAN                      (1<<2)
#define EZRP_PREAMBLE_CONFIG_STANDARD_PREAM_PRE_NS                  (0<<0)
#define EZRP_PREAMBLE_CONFIG_STANDARD_PREAM_PRE_1010                (1<<0)
#define EZRP_PREAMBLE_CONFIG_STANDARD_PREAM_PRE_0101                (2<<0)

#define EZRP_SYNC_CONFIG_SKIP_TX_SYNC_XMIT                          (0<<7)
#define EZRP_SYNC_CONFIG_SKIP_TX_NO_SYNC_XMIT                       (1<<7)
#define EZRP_SYNC_CONFIG_RX_ERRORS(x)                               (x<<4)
#define EZRP_SYNC_CONFIG_4FSK_DISABLED                              (0<<3)
#define EZRP_SYNC_CONFIG_4FSK_ENABLED                               (1<<3)
#define EZRP_SYNC_CONFIG_MANCH_DISABLED                             (0<<2)
#define EZRP_SYNC_CONFIG_MANCH_ENABLED                              (1<<2)
#define EZRP_SYNC_CONFIG_LENGTH_LEN_1_BYTES                         (0<<0)
#define EZRP_SYNC_CONFIG_LENGTH_LEN_2_BYTES                         (1<<0)
#define EZRP_SYNC_CONFIG_LENGTH_LEN_3_BYTES                         (2<<0)
#define EZRP_SYNC_CONFIG_LENGTH_LEN_4_BYTES                         (3<<0)

#define EZRP_SYNC_CONFIG2_SYNC_ERROR_ONLY_BEGIN_SYNC_ERROR_RAND     (0<<7)
#define EZRP_SYNC_CONFIG2_SYNC_ERROR_ONLY_BEGIN_SYNC_ERROR_BEGIN    (1<<7)
#define EZRP_SYNC_CONFIG2_LENGTH_SUB_SUB_0                          (0<<0)
#define EZRP_SYNC_CONFIG2_LENGTH_SUB_SUB_2                          (1<<0)
#define EZRP_SYNC_CONFIG2_LENGTH_SUB_SUB_4                          (2<<0)
#define EZRP_SYNC_CONFIG2_LENGTH_SUB_SUB_6                          (3<<0)

#define EZRP_PKT_CRC_CONFIG_CRC_SEED_CRC_SEED_0             (0<<7)
#define EZRP_PKT_CRC_CONFIG_CRC_SEED_CRC_SEED_1             (1<<7)
#define EZRP_PKT_CRC_CONFIG_ALT_CRC_POLYNOMIAL_NO_CRC       (0<<4)
#define EZRP_PKT_CRC_CONFIG_ALT_CRC_POLYNOMIAL_ITU_T_CRC8   (1<<4)
#define EZRP_PKT_CRC_CONFIG_ALT_CRC_POLYNOMIAL_IEC_16       (2<<4)
#define EZRP_PKT_CRC_CONFIG_ALT_CRC_POLYNOMIAL_BAICHEVA_16  (3<<4)
#define EZRP_PKT_CRC_CONFIG_ALT_CRC_POLYNOMIAL_CRC_16_IBM   (4<<4)
#define EZRP_PKT_CRC_CONFIG_ALT_CRC_POLYNOMIAL_CCITT_16     (5<<4)
#define EZRP_PKT_CRC_CONFIG_ALT_CRC_POLYNOMIAL_CRC_16_DNP   (6<<4)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_NO_CRC          (0)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_ITU_T_CRC       (1)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_IEC_16          (2)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_BAICHEVA_16     (3)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_CRC_16_IBM      (4)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_CCITT_16        (5)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_KOOPMAN         (6)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_IEEE_802_3      (7)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_CASTAGNOLI      (8)
#define EZRP_PKT_CRC_CONFIG_CRC_POLYNOMINAL_CRC_16_DNP      (9)

#define EZRP_PKT_WHT_BIT_NUM_SW_WHT_CTRL_DISABLE            (0<<7)
#define EZRP_PKT_WHT_BIT_NUM_SW_WHT_CTRL_ENABLE             (1<<7)
#define EZRP_PKT_WHT_BIT_NUM_SW_CRC_CTRL_DISABLE            (0<<6)
#define EZRP_PKT_WHT_BIT_NUM_SW_CRC_CTRL_ENABLE             (1<<6)
#define EZRP_PKT_WHT_BIT_NUM_PN_DIRECTION_FORWARD           (0<<5)
#define EZRP_PKT_WHT_BIT_NUM_PN_DIRECTION_REVERSED          (1<<5)
#define EZRP_PKT_WHT_BIT_NUM_WHT_BIT_NUM(x)                 (x)

#define EZRP_PKT_CONFIG1_PH_FIELD_SPLIT_FIELD_SHARED        (0<<7)
#define EZRP_PKT_CONFIG1_PH_FIELD_SPLIT_FIELD_SPLIT         (1<<7)
#define EZRP_PKT_CONFIG1_PH_RX_DISABLE_RX_ENABLED           (0<<6)
#define EZRP_PKT_CONFIG1_PH_RX_DISABLE_RX_DISABLED          (1<<6)
#define EZRP_PKT_CONFIG1_4FSK_EN_DISABLE                    (0<<5)
#define EZRP_PKT_CONFIG1_4FSK_EN_ENABLE                     (1<<5)
#define EZRP_PKT_CONFIG1_MANCH_POL_PATTERN_10               (0<<3)
#define EZRP_PKT_CONFIG1_MANCH_POL_PATTERN_01               (1<<3)
#define EZRP_PKT_CONFIG1_CRC_INVERT_NO_INVERT               (0<<2)
#define EZRP_PKT_CONFIG1_CRC_INVERT_INVERT_CRC              (1<<2)
#define EZRP_PKT_CONFIG1_CRC_ENDIAN_LSBYTE_FIRST            (0<<1)
#define EZRP_PKT_CONFIG1_CRC_ENDIAN_MSBYTE_FIRST            (1<<1)
#define EZRP_PKT_CONFIG1_BIT_ORDER_MSBIT_FIRST              (0<<0)
#define EZRP_PKT_CONFIG1_BIT_ORDER_LSBIT_FIRST              (1<<0)

#define EZRP_PKT_CONFIG2_CRC_BIT_ENDIAN_MSBIT_FIRST         (0<<7)
#define EZRP_PKT_CONFIG2_CRC_BIT_ENDIAN_LSBIT_FIRST         (1<<7)
#define EZRP_PKT_CONFIG2_CRC_PADDING_NO_PADDING             (0<<6)
#define EZRP_PKT_CONFIG2_CRC_PADDING_PAD_ZEROS              (1<<6)
#define EZRP_PKT_CONFIG2_ALT_CRC_SEED_ALT_CRC_SEED_0        (0<<5)
#define EZRP_PKT_CONFIG2_ALT_CRC_SEED_ALT_CRC_SEED_1        (1<<5)
#define EZRP_PKT_CONFIG2_EN_3_OF_6_DISABLED                 (0<<4)
#define EZRP_PKT_CONFIG2_EN_3_OF_6_ENABLED                  (1<<4)

#define EZRP_PKT_LEN_INFINITE_LEN_NORMAL                    (0<<6)
#define EZRP_PKT_LEN_INFINITE_LEN_INFINITE                  (1<<6)
#define EZRP_PKT_LEN_ENDIAN_LITTLE                          (0<<5)
#define EZRP_PKT_LEN_ENDIAN_BIG                             (1<<5)
#define EZRP_PKT_LEN_SIZE_ONE_BYTE                          (0<<4)
#define EZRP_PKT_LEN_SIZE_TWO_BYTES                         (1<<4)
#define EZRP_PKT_LEN_IN_FIFO_CUT_OUT                        (0<<3)
#define EZRP_PKT_LEN_IN_FIFO_LEAVE_IN                       (1<<3)
#define EZRP_PKT_LEN_DST_FIELD(x)                           (x<<0)

#define EZRP_PKT_FIELD_CONFIG_4FSK_DISABLE                  (0<<4)
#define EZRP_PKT_FIELD_CONFIG_4FSK_ENABLE                   (1<<4)
#define EZRP_PKT_FIELD_CONFIG_PN_START_CONTINUE             (0<<2)
#define EZRP_PKT_FIELD_CONFIG_PN_START_LOAD                 (1<<2)
#define EZRP_PKT_FIELD_CONFIG_WHITEN_DISABLE                (0<<1)
#define EZRP_PKT_FIELD_CONFIG_WHITEN_ENABLE                 (1<<1)
#define EZRP_PKT_FIELD_CONFIG_MANCH_DISABLE                 (0<<0)
#define EZRP_PKT_FIELD_CONFIG_MANCH_ENABLE                  (1<<0)

#define EZRP_PKT_FIELD_CRC_CONFIG_CRC_START_CONTINUE        (0<<7)
#define EZRP_PKT_FIELD_CRC_CONFIG_CRC_START_LOAD            (1<<7)
#define EZRP_PKT_FIELD_CRC_CONFIG_ALT_CRC_START_CONTINUE    (0<<6)
#define EZRP_PKT_FIELD_CRC_CONFIG_ALT_CRC_START_LOAD        (1<<6)
#define EZRP_PKT_FIELD_CRC_CONFIG_SEND_CRC_OFF              (0<<5)
#define EZRP_PKT_FIELD_CRC_CONFIG_SEND_CRC_ON               (1<<5)
#define EZRP_PKT_FIELD_CRC_CONFIG_SEND_ALT_CRC_OFF          (0<<4)
#define EZRP_PKT_FIELD_CRC_CONFIG_SEND_ALT_CRC_ON           (1<<4)
#define EZRP_PKT_FIELD_CRC_CONFIG_CHECK_CRC_OFF             (0<<3)
#define EZRP_PKT_FIELD_CRC_CONFIG_CHECK_CRC_ON              (1<<3)
#define EZRP_PKT_FIELD_CRC_CONFIG_CHECK_ALT_CRC_OFF         (0<<2)
#define EZRP_PKT_FIELD_CRC_CONFIG_CHECK_ALT_CRC_ON          (1<<2)
#define EZRP_PKT_FIELD_CRC_CONFIG_CRC_ENABLE_OFF            (0<<1)
#define EZRP_PKT_FIELD_CRC_CONFIG_CRC_ENABLE_ON             (1<<1)
#define EZRP_PKT_FIELD_CRC_CONFIG_ALT_CRC_ENABLE_OFF        (0<<0)
#define EZRP_PKT_FIELD_CRC_CONFIG_ALT_CRC_ENABLE_ON         (1<<0)

#define EZRP_MODEM_MOD_TYPE_TX_DIRECT_MODE_TYPE_SYNC        (0<<7)
#define EZRP_MODEM_MOD_TYPE_TX_DIRECT_MODE_TYPE_ASYNC       (1<<7)
#define EZRP_MODEM_MOD_TYPE_TX_DIRECT_MODE_GPIO_GPIO0       (0<<5)
#define EZRP_MODEM_MOD_TYPE_TX_DIRECT_MODE_GPIO_GPIO1       (1<<5)
#define EZRP_MODEM_MOD_TYPE_TX_DIRECT_MODE_GPIO_GPIO2       (2<<5)
#define EZRP_MODEM_MOD_TYPE_TX_DIRECT_MODE_GPIO_GPIO3       (3<<5)
#define EZRP_MODEM_MOD_TYPE_MOD_SOURCE_PACKET               (0<<3)
#define EZRP_MODEM_MOD_TYPE_MOD_SOURCE_DIRECT               (1<<3)
#define EZRP_MODEM_MOD_TYPE_MOD_SOURCE_PSEUDO               (2<<3)
#define EZRP_MODEM_MOD_TYPE_MOD_TYPE_CW                     (0<<0)
#define EZRP_MODEM_MOD_TYPE_MOD_TYPE_OOK                    (1<<0)
#define EZRP_MODEM_MOD_TYPE_MOD_TYPE_2FSK                   (2<<0)
#define EZRP_MODEM_MOD_TYPE_MOD_TYPE_2GFSK                  (3<<0)
#define EZRP_MODEM_MOD_TYPE_MOD_TYPE_4FSK                   (4<<0)
#define EZRP_MODEM_MOD_TYPE_MOD_TYPE_4GFSK                  (5<<0)

#define EZRP_MODEM_MAP_CONTROL_ENMANCH_NOADJUST             (0<<7)
#define EZRP_MODEM_MAP_CONTROL_ENMANCH_ADJUST               (1<<7)
#define EZRP_MODEM_MAP_CONTROL_ENINV_RXBIT_NOINVERT         (0<<6)
#define EZRP_MODEM_MAP_CONTROL_ENINV_RXBIT_INVERT           (1<<6)
#define EZRP_MODEM_MAP_CONTROL_ENINV_TXBIT_NOINVERT         (0<<5)
#define EZRP_MODEM_MAP_CONTROL_ENINV_TXBIT_INVERT           (1<<5)
#define EZRP_MODEM_MAP_CONTROL_ENINV_FD_NOINVERT            (0<<4)
#define EZRP_MODEM_MAP_CONTROL_ENINV_FD_INVERT              (1<<4)

#define EZRP_MODEM_CLKGEN_BAND_FORCE_SY_RECAL_FORCE         (0<<4)
#define EZRP_MODEM_CLKGEN_BAND_FORCE_SY_RECAL_SKIP          (1<<4)
#define EZRP_MODEM_CLKGEN_BAND_SY_SEL_LOWPOWER              (0<<3)
#define EZRP_MODEM_CLKGEN_BAND_SY_SEL_HIGHPERF              (1<<3)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_4              (0<<0)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_6              (1<<0)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_8              (2<<0)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_12             (3<<0)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_16             (4<<0)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_24             (5<<0)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_24_2           (6<<0)
#define EZRP_MODEM_CLKGEN_BAND_BAND_FVCO_DIV_24_3           (7<<0)

#define EZRP_MODEM_AFC_GEAR_GEAR_SW_PREAMBLE                (0<<6)
#define EZRP_MODEM_AFC_GEAR_GEAR_SW_SYNC                    (1<<6)
#define EZRP_MODEM_AFC_GEAR_GEAR_SW_MIDPOINT                (2<<6)
#define EZRP_MODEM_AFC_GEAR_GEAR_SW_PREAMBLE2               (3<<6)
#define EZRP_MODEM_AFC_GEAR_AFC_FAST(x)                     (x<<3)
#define EZRP_MODEM_AFC_GEAR_AFC_SLOW(x)                     (x<<0)

#define EZRP_MODEM_AFC_GAIN_ENAFC_DISABLE                   (0<<7)
#define EZRP_MODEM_AFC_GAIN_ENAFC_ENABLE                    (1<<7)
#define EZRP_MODEM_AFC_GAIN_AFCBD_DISABLE                   (0<<6)
#define EZRP_MODEM_AFC_GAIN_AFCBD_ENABLE                    (1<<6)
#define EZRP_MODEM_AFC_GAIN_AFC_GAIN_DIV_NO_REDUCTION       (0<<5)
#define EZRP_MODEM_AFC_GAIN_AFC_GAIN_DIV_REDUCTION_BY_HALF  (1<<5)
#define EZRP_MODEM_AFC_GAIN_AFCGAIN_12_8(x)                 (x)
#define EZRP_MODEM_AFC_GAIN_AFCGAIN_7_0(x)                  (x)

#define EZRP_MODEM_AFC_MISC_ENAFCFRZ_AFC_PKT                (0<<7)
#define EZRP_MODEM_AFC_MISC_ENAFCFRZ_AFC_FRZN_AFTER_GEAR_SW (1<<7)
#define EZRP_MODEM_AFC_MISC_ENFBPLL_DISABLE_AFC_COR_POLL    (0<<6)
#define EZRP_MODEM_AFC_MISC_ENFBPLL_ENABLE_AFC_COR_POLL     (1<<6)
#define EZRP_MODEM_AFC_MISC_EN2TB_EST_AFC_COR_MA            (0<<5)
#define EZRP_MODEM_AFC_MISC_EN2TB_EST_AFC_COR_2TB           (1<<5)
#define EZRP_MODEM_AFC_MISC_ENFZPMEND_NO_AFC_FRZN           (0<<4)
#define EZRP_MODEM_AFC_MISC_ENFZPMEND_AFC_FRZN_PREAMBLE     (1<<4)
#define EZRP_MODEM_AFC_MISC_ENAFC_CLKSW_NO_CLK_SW           (0<<3)
#define EZRP_MODEM_AFC_MISC_ENAFC_CLKSW_CLK_SW_TO_BCR_BCLK  (1<<3)
#define EZRP_MODEM_AFC_MISC_NON_FRZEN_AFC_FRZN_CONSEC_BITS  (0<<1)
#define EZRP_MODEM_AFC_MISC_NON_FRZEN_AFC_ALWAYS_EN         (1<<1)
#define EZRP_MODEM_AFC_MISC_LARGE_FREQ_ERR_DISABLED         (0<<0)
#define EZRP_MODEM_AFC_MISC_LARGE_FREQ_ERR_ENABLED          (1<<0)

#define EZRP_PA_MODE_EXT_PA_RAMP_DISABLE                    (0<<7)
#define EZRP_PA_MODE_EXT_PA_RAMP_ENABLE                     (1<<7)
#define EZRP_PA_MODE_DIG_PWR_SEQ_DISABLE                    (0<<6)
#define EZRP_PA_MODE_DIG_PWR_SEQ_ENABLE                     (1<<6)
#define EZRP_PA_MODE_PA_SEL_HP_FINE                         (1<<2)
#define EZRP_PA_MODE_PA_SEL_HP_COARSE                       (2<<2)
#define EZRP_PA_MODE_PA_SEL_LP                              (6<<2)
#define EZRP_PA_MODE_PA_SEL_MP                              (8<<2)
#define EZRP_PA_MODE_PA_MODE_CLE                            (0<<0)
#define EZRP_PA_MODE_PA_MODE_SWC                            (1<<0)

#define EZRP_PA_PWR_LVL_MAXIMUM                             (0x7F)

#define EZRP_PA_BIAS_CLKDUTY_CLK_DUTY_DIFF_50               (0<<6)
#define EZRP_PA_BIAS_CLKDUTY_CLK_DUTY_SINGLE_25             (3<<6)
#define EZRP_PA_BIAS_CLKDUTY_OB(x)                          (x)
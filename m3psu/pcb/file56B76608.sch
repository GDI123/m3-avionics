EESchema Schematic File Version 2
LIBS:agg-kicad
LIBS:m3psu-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 6
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L CONN_01x02 J?
U 1 1 56B94890
P 4950 6100
F 0 "J?" H 4900 6200 50  0000 L CNN
F 1 "CONN_01x02" H 4900 5900 50  0000 L CNN
F 2 "" H 4950 6100 50  0001 C CNN
F 3 "" H 4950 6100 50  0001 C CNN
	1    4950 6100
	-1   0    0    -1  
$EndComp
$Comp
L CONN_01x02 J?
U 1 1 56B9491D
P 4950 6550
F 0 "J?" H 4900 6650 50  0000 L CNN
F 1 "CONN_01x02" H 4900 6350 50  0000 L CNN
F 2 "" H 4950 6550 50  0001 C CNN
F 3 "" H 4950 6550 50  0001 C CNN
	1    4950 6550
	-1   0    0    -1  
$EndComp
$Comp
L MAX17435 IC?
U 1 1 56B94994
P 3600 4800
F 0 "IC?" H 3100 5600 50  0000 L CNN
F 1 "MAX17435" H 3100 4000 50  0000 L CNN
F 2 "agg:QFN-24-EP-MAX" H 3100 3900 50  0001 L CNN
F 3 "https://datasheets.maximintegrated.com/en/ds/MAX17435-MAX17535.pdf" H 3100 3800 50  0001 L CNN
F 4 "2516688" H 3100 3700 50  0001 L CNN "Farnell"
	1    3600 4800
	1    0    0    -1  
$EndComp
$Comp
L LTC4353 IC?
U 1 1 56B94A8E
P 8500 2050
F 0 "IC?" H 8000 2750 50  0000 L CNN
F 1 "LTC4353" H 8000 1350 50  0000 L CNN
F 2 "agg:DFN-16-EP-LTC-DE" H 8000 1250 50  0001 L CNN
F 3 "https://cds.linear.com/docs/en/datasheet/4353f.pdf" H 8000 1150 50  0001 L CNN
F 4 "2115909" H 8000 1050 50  0001 L CNN "Farnell"
	1    8500 2050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56B94BFC
P 4850 7050
F 0 "#PWR?" H 4720 7090 50  0001 L CNN
F 1 "GND" H 4850 6950 50  0000 C CNN
F 2 "" H 4850 7050 60  0000 C CNN
F 3 "" H 4850 7050 60  0000 C CNN
	1    4850 7050
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56B94FDE
P 2450 4700
F 0 "R?" H 2500 4750 50  0000 C CNN
F 1 "4k7" H 2500 4650 50  0000 C CNN
F 2 "" H 2450 4700 50  0001 C CNN
F 3 "" H 2450 4700 50  0001 C CNN
	1    2450 4700
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56B9502F
P 2900 4650
F 0 "R?" H 2950 4700 50  0000 C CNN
F 1 "4k7" H 2950 4600 50  0000 C CNN
F 2 "" H 2900 4650 50  0001 C CNN
F 3 "" H 2900 4650 50  0001 C CNN
	1    2900 4650
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56B951EE
P 4700 3950
F 0 "R?" H 4750 4000 50  0000 C CNN
F 1 "R" H 4750 3900 50  0000 C CNN
F 2 "" H 4700 3950 50  0001 C CNN
F 3 "" H 4700 3950 50  0001 C CNN
	1    4700 3950
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56B95484
P 2900 4500
F 0 "R?" H 2950 4550 50  0000 C CNN
F 1 "R" H 2950 4450 50  0000 C CNN
F 2 "" H 2900 4500 50  0001 C CNN
F 3 "" H 2900 4500 50  0001 C CNN
	1    2900 4500
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56B9561D
P 2650 4250
F 0 "R?" H 2700 4300 50  0000 C CNN
F 1 "10k" H 2700 4200 50  0000 C CNN
F 2 "" H 2650 4250 50  0001 C CNN
F 3 "" H 2650 4250 50  0001 C CNN
	1    2650 4250
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56B95654
P 2850 4300
F 0 "R?" H 2900 4350 50  0000 C CNN
F 1 "10k" H 2900 4250 50  0000 C CNN
F 2 "" H 2850 4300 50  0001 C CNN
F 3 "" H 2850 4300 50  0001 C CNN
	1    2850 4300
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56B956BC
P 4550 4500
F 0 "R?" H 4600 4550 50  0000 C CNN
F 1 "R" H 4600 4450 50  0000 C CNN
F 2 "" H 4550 4500 50  0001 C CNN
F 3 "" H 4550 4500 50  0001 C CNN
	1    4550 4500
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56B960F3
P 2450 4500
F 0 "#PWR?" H 2320 4540 50  0001 L CNN
F 1 "GND" H 2450 4400 50  0000 C CNN
F 2 "" H 2450 4500 60  0000 C CNN
F 3 "" H 2450 4500 60  0000 C CNN
	1    2450 4500
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 56B98369
P 2400 4200
F 0 "C?" H 2450 4270 50  0000 C CNN
F 1 "1µ" H 2450 4130 50  0000 C CNN
F 2 "" H 2400 4200 50  0001 C CNN
F 3 "" H 2400 4200 50  0001 C CNN
	1    2400 4200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56B983FF
P 2300 4200
F 0 "#PWR?" H 2170 4240 50  0001 L CNN
F 1 "GND" H 2300 4100 50  0000 C CNN
F 2 "" H 2300 4200 60  0000 C CNN
F 3 "" H 2300 4200 60  0000 C CNN
	1    2300 4200
	0    1    1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 56B987EC
P 2000 4850
F 0 "#PWR?" H 1870 4890 50  0001 L CNN
F 1 "GND" H 2000 4750 50  0000 C CNN
F 2 "" H 2000 4850 60  0000 C CNN
F 3 "" H 2000 4850 60  0000 C CNN
	1    2000 4850
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56B98F95
P 2750 4100
F 0 "R?" H 2800 4150 50  0000 C CNN
F 1 "10k" H 2800 4050 50  0000 C CNN
F 2 "" H 2750 4100 50  0001 C CNN
F 3 "" H 2750 4100 50  0001 C CNN
	1    2750 4100
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 56B99870
P 2850 5300
F 0 "C?" H 2900 5370 50  0000 C CNN
F 1 "1µ" H 2900 5230 50  0000 C CNN
F 2 "" H 2850 5300 50  0001 C CNN
F 3 "" H 2850 5300 50  0001 C CNN
	1    2850 5300
	0    1    1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 56B999DF
P 2950 5550
F 0 "#PWR?" H 2820 5590 50  0001 L CNN
F 1 "GND" H 2950 5450 50  0000 C CNN
F 2 "" H 2950 5550 60  0000 C CNN
F 3 "" H 2950 5550 60  0000 C CNN
	1    2950 5550
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 56B99B87
P 2750 5100
F 0 "C?" H 2800 5170 50  0000 C CNN
F 1 "10n" H 2800 5030 50  0000 C CNN
F 2 "" H 2750 5100 50  0001 C CNN
F 3 "" H 2750 5100 50  0001 C CNN
	1    2750 5100
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 56B99D2E
P 2600 5250
F 0 "C?" H 2650 5320 50  0000 C CNN
F 1 "100n" H 2650 5180 50  0000 C CNN
F 2 "" H 2600 5250 50  0001 C CNN
F 3 "" H 2600 5250 50  0001 C CNN
	1    2600 5250
	0    1    1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 56B99D99
P 2600 5400
F 0 "#PWR?" H 2470 5440 50  0001 L CNN
F 1 "GND" H 2600 5300 50  0000 C CNN
F 2 "" H 2600 5400 60  0000 C CNN
F 3 "" H 2600 5400 60  0000 C CNN
	1    2600 5400
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56B99E58
P 2650 5100
F 0 "#PWR?" H 2520 5140 50  0001 L CNN
F 1 "GND" H 2650 5000 50  0000 C CNN
F 2 "" H 2650 5100 60  0000 C CNN
F 3 "" H 2650 5100 60  0000 C CNN
	1    2650 5100
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 56B9A1E0
P 2000 4700
F 0 "C?" H 2050 4770 50  0000 C CNN
F 1 "1µ" H 2050 4630 50  0000 C CNN
F 2 "" H 2000 4700 50  0001 C CNN
F 3 "" H 2000 4700 50  0001 C CNN
	1    2000 4700
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56B9A474
P 1600 4300
F 0 "R?" H 1650 4350 50  0000 C CNN
F 1 "10" H 1650 4250 50  0000 C CNN
F 2 "" H 1600 4300 50  0001 C CNN
F 3 "" H 1600 4300 50  0001 C CNN
	1    1600 4300
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56B9A8BA
P 2500 4500
F 0 "R?" H 2550 4550 50  0000 C CNN
F 1 "R" H 2550 4450 50  0000 C CNN
F 2 "" H 2500 4500 50  0001 C CNN
F 3 "" H 2500 4500 50  0001 C CNN
	1    2500 4500
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56C2299F
P 4400 5200
F 0 "R?" H 4450 5250 50  0000 C CNN
F 1 "R" H 4450 5150 50  0000 C CNN
F 2 "" H 4400 5200 50  0001 C CNN
F 3 "" H 4400 5200 50  0001 C CNN
	1    4400 5200
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 56C22B33
P 4400 5450
F 0 "C?" H 4450 5520 50  0000 C CNN
F 1 "C" H 4450 5380 50  0000 C CNN
F 2 "" H 4400 5450 50  0001 C CNN
F 3 "" H 4400 5450 50  0001 C CNN
	1    4400 5450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 56C22BA5
P 4400 5600
F 0 "#PWR?" H 4270 5640 50  0001 L CNN
F 1 "GND" H 4400 5500 50  0000 C CNN
F 2 "" H 4400 5600 60  0000 C CNN
F 3 "" H 4400 5600 60  0000 C CNN
	1    4400 5600
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 56C22F12
P 4350 4800
F 0 "C?" H 4400 4870 50  0000 C CNN
F 1 "100n" H 4400 4730 50  0000 C CNN
F 2 "" H 4350 4800 50  0001 C CNN
F 3 "" H 4350 4800 50  0001 C CNN
	1    4350 4800
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 56C252CF
P 7050 1950
F 0 "C?" H 7100 2020 50  0000 C CNN
F 1 "100n" H 7100 1880 50  0000 C CNN
F 2 "" H 7050 1950 50  0001 C CNN
F 3 "" H 7050 1950 50  0001 C CNN
	1    7050 1950
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 56C25AA5
P 9200 1450
F 0 "C?" H 9250 1520 50  0000 C CNN
F 1 "C" H 9250 1380 50  0000 C CNN
F 2 "" H 9200 1450 50  0001 C CNN
F 3 "" H 9200 1450 50  0001 C CNN
	1    9200 1450
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 56C25D3F
P 9200 1950
F 0 "C?" H 9250 2020 50  0000 C CNN
F 1 "C" H 9250 1880 50  0000 C CNN
F 2 "" H 9200 1950 50  0001 C CNN
F 3 "" H 9200 1950 50  0001 C CNN
	1    9200 1950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56C26CC7
P 7850 2700
F 0 "#PWR?" H 7720 2740 50  0001 L CNN
F 1 "GND" H 7850 2600 50  0000 C CNN
F 2 "" H 7850 2700 60  0000 C CNN
F 3 "" H 7850 2700 60  0000 C CNN
	1    7850 2700
	1    0    0    -1  
$EndComp
$Comp
L L L?
U 1 1 56C2AF1E
P 5400 4950
F 0 "L?" H 5450 5000 50  0000 C CNN
F 1 "L" H 5450 4900 50  0000 C CNN
F 2 "" H 5400 4950 50  0001 C CNN
F 3 "" H 5400 4950 50  0001 C CNN
	1    5400 4950
	0    1    1    0   
$EndComp
$Comp
L NFET Q?
U 1 1 56C2BEBD
P 5250 4600
F 0 "Q?" H 5000 4630 50  0000 L CNN
F 1 "NFET" H 5000 4440 50  0000 L CNN
F 2 "" H 5250 4600 50  0001 C CNN
F 3 "" H 5250 4600 50  0001 C CNN
	1    5250 4600
	1    0    0    -1  
$EndComp
$Comp
L NFET Q?
U 1 1 56C2C020
P 5250 4900
F 0 "Q?" H 5000 4930 50  0000 L CNN
F 1 "NFET" H 5000 4740 50  0000 L CNN
F 2 "" H 5250 4900 50  0001 C CNN
F 3 "" H 5250 4900 50  0001 C CNN
	1    5250 4900
	1    0    0    -1  
$EndComp
$Comp
L NFET Q?
U 1 1 56C2C099
P 4900 4200
F 0 "Q?" H 4700 4250 50  0000 L CNN
F 1 "NFET" H 4650 4040 50  0000 L CNN
F 2 "" H 4900 4200 50  0001 C CNN
F 3 "" H 4900 4200 50  0001 C CNN
	1    4900 4200
	1    0    0    -1  
$EndComp
$Comp
L NFET Q?
U 1 1 56C2C117
P 4200 3250
F 0 "Q?" H 4000 3300 50  0000 L CNN
F 1 "NFET" H 3950 3050 50  0000 L CNN
F 2 "" H 4200 3250 50  0001 C CNN
F 3 "" H 4200 3250 50  0001 C CNN
	1    4200 3250
	1    0    0    1   
$EndComp
$Comp
L GND #PWR?
U 1 1 56C2F498
P 5250 5150
F 0 "#PWR?" H 5120 5190 50  0001 L CNN
F 1 "GND" H 5250 5050 50  0000 C CNN
F 2 "" H 5250 5150 60  0000 C CNN
F 3 "" H 5250 5150 60  0000 C CNN
	1    5250 5150
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 56C37A0D
P 5550 4550
F 0 "C?" H 5600 4620 50  0000 C CNN
F 1 "C" H 5600 4480 50  0000 C CNN
F 2 "" H 5550 4550 50  0001 C CNN
F 3 "" H 5550 4550 50  0001 C CNN
	1    5550 4550
	0    1    1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 56C37AF2
P 5550 4700
F 0 "#PWR?" H 5420 4740 50  0001 L CNN
F 1 "GND" H 5550 4600 50  0000 C CNN
F 2 "" H 5550 4700 60  0000 C CNN
F 3 "" H 5550 4700 60  0000 C CNN
	1    5550 4700
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56C3821C
P 5050 4400
F 0 "R?" H 5100 4450 50  0000 C CNN
F 1 "10m" H 5100 4350 50  0000 C CNN
F 2 "" H 5050 4400 50  0001 C CNN
F 3 "" H 5050 4400 50  0001 C CNN
	1    5050 4400
	1    0    0    -1  
$EndComp
$Comp
L VBATT #PWR?
U 1 1 56C38460
P 5550 4400
F 0 "#PWR?" H 5550 4510 50  0001 L CNN
F 1 "VBATT" V 5500 4550 50  0000 C CNN
F 2 "" H 5550 4400 60  0000 C CNN
F 3 "" H 5550 4400 60  0000 C CNN
	1    5550 4400
	0    1    1    0   
$EndComp
$Comp
L PFET Q?
U 1 1 56C3D29E
P 4450 6200
F 0 "Q?" H 4200 6230 50  0000 L CNN
F 1 "PFET" H 4200 6040 50  0000 L CNN
F 2 "" H 4450 6200 50  0001 C CNN
F 3 "" H 4450 6200 50  0001 C CNN
	1    4450 6200
	1    0    0    -1  
$EndComp
$Comp
L NFET Q?
U 1 1 56C3D776
P 4450 6800
F 0 "Q?" H 4200 6830 50  0000 L CNN
F 1 "NFET" H 4200 6640 50  0000 L CNN
F 2 "" H 4450 6800 50  0001 C CNN
F 3 "" H 4450 6800 50  0001 C CNN
	1    4450 6800
	1    0    0    -1  
$EndComp
Text HLabel 2250 3950 0    60   Output ~ 0
~AC_OK
Text HLabel 2300 4400 0    60   Output ~ 0
CHARGE_OL
Text HLabel 2450 5200 0    60   Output ~ 0
CHARGE_IMON
Text HLabel 2800 4800 0    60   BiDi ~ 0
SCL
Text HLabel 2350 4900 0    60   BiDi ~ 0
SDA
$Comp
L R R?
U 1 1 56C428FC
P 4450 5950
F 0 "R?" H 4500 6000 50  0000 C CNN
F 1 "100" H 4500 5900 50  0000 C CNN
F 2 "" H 4450 5950 50  0001 C CNN
F 3 "" H 4450 5950 50  0001 C CNN
F 4 "1/4" H 4450 5950 60  0001 C CNN "Power"
	1    4450 5950
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56C429C6
P 4450 6550
F 0 "R?" H 4500 6600 50  0000 C CNN
F 1 "100" H 4500 6500 50  0000 C CNN
F 2 "" H 4450 6550 50  0001 C CNN
F 3 "" H 4450 6550 50  0001 C CNN
F 4 "1/4" H 4450 6550 60  0001 C CNN "Power"
	1    4450 6550
	0    1    1    0   
$EndComp
Text HLabel 4100 6900 0    60   Input ~ 0
BATT1_BAL
Text HLabel 5150 6400 2    60   Output ~ 0
BATT1_VMON
Text HLabel 5150 5900 2    60   Output ~ 0
BATT2_VMON
$Comp
L NFET Q?
U 1 1 56C4464A
P 4050 6450
F 0 "Q?" H 3800 6480 50  0000 L CNN
F 1 "NFET" H 3800 6290 50  0000 L CNN
F 2 "" H 4050 6450 50  0001 C CNN
F 3 "" H 4050 6450 50  0001 C CNN
	1    4050 6450
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56C4477F
P 4050 6700
F 0 "#PWR?" H 3920 6740 50  0001 L CNN
F 1 "GND" H 4050 6600 50  0000 C CNN
F 2 "" H 4050 6700 60  0000 C CNN
F 3 "" H 4050 6700 60  0000 C CNN
	1    4050 6700
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56C44E02
P 4050 6050
F 0 "R?" H 4100 6100 50  0000 C CNN
F 1 "10k" H 4100 6000 50  0000 C CNN
F 2 "" H 4050 6050 50  0001 C CNN
F 3 "" H 4050 6050 50  0001 C CNN
	1    4050 6050
	0    1    1    0   
$EndComp
Text HLabel 3750 6550 0    60   Input ~ 0
BATT2_BAL
$Comp
L NFET Q?
U 1 1 56C49143
P 9750 1550
F 0 "Q?" H 9500 1580 50  0000 L CNN
F 1 "NFET" H 9500 1390 50  0000 L CNN
F 2 "" H 9750 1550 50  0001 C CNN
F 3 "" H 9750 1550 50  0001 C CNN
	1    9750 1550
	1    0    0    -1  
$EndComp
$Comp
L NFET Q?
U 1 1 56C4E9D1
P 9750 2250
F 0 "Q?" H 9500 2280 50  0000 L CNN
F 1 "NFET" H 9500 2050 50  0000 L CNN
F 2 "" H 9750 2250 50  0001 C CNN
F 3 "" H 9750 2250 50  0001 C CNN
	1    9750 2250
	1    0    0    1   
$EndComp
$Comp
L PWR #FLG?
U 1 1 56C4F900
P 9750 1200
F 0 "#FLG?" H 9750 1360 50  0001 C CNN
F 1 "PWR" H 9750 1290 50  0000 C CNN
F 2 "" H 9750 1200 50  0001 C CNN
F 3 "" H 9750 1200 50  0001 C CNN
	1    9750 1200
	1    0    0    -1  
$EndComp
$Comp
L VBATT #PWR?
U 1 1 56C5093E
P 9750 2000
F 0 "#PWR?" H 9750 2110 50  0001 L CNN
F 1 "VBATT" H 9750 2090 50  0000 C CNN
F 2 "" H 9750 2000 60  0000 C CNN
F 3 "" H 9750 2000 60  0000 C CNN
	1    9750 2000
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR?
U 1 1 56C54AF9
P 10050 2050
F 0 "#PWR?" H 10050 2160 50  0001 L CNN
F 1 "VCC" V 10000 2150 50  0000 C CNN
F 2 "" H 10050 2050 60  0000 C CNN
F 3 "" H 10050 2050 60  0000 C CNN
	1    10050 2050
	0    1    1    0   
$EndComp
Text HLabel 7850 1650 0    60   Input ~ 0
~EN_EXT_PWR
Text HLabel 7850 1750 0    60   Input ~ 0
~EN_INT_PWR
Text HLabel 7850 2250 0    60   Output ~ 0
~ON_EXT_PWR
Text HLabel 7850 2350 0    60   Output ~ 0
~ON_INT_PWR
Text HLabel 10050 1750 2    60   Output ~ 0
VCC_VMON
$Comp
L PWR #FLG?
U 1 1 56C61BF6
P 3500 2950
F 0 "#FLG?" H 3500 3110 50  0001 C CNN
F 1 "PWR" H 3500 3050 50  0000 C CNN
F 2 "" H 3500 2950 50  0001 C CNN
F 3 "" H 3500 2950 50  0001 C CNN
	1    3500 2950
	1    0    0    -1  
$EndComp
$Comp
L NFET Q?
U 1 1 56C62099
P 3750 3300
F 0 "Q?" V 3600 3300 50  0000 L CNN
F 1 "NFET" H 3550 3100 50  0000 L CNN
F 2 "" H 3750 3300 50  0001 C CNN
F 3 "" H 3750 3300 50  0001 C CNN
	1    3750 3300
	0    1    -1   0   
$EndComp
$Comp
L R R?
U 1 1 56C62548
P 3650 3150
F 0 "R?" H 3700 3200 50  0000 C CNN
F 1 "R" H 3700 3100 50  0000 C CNN
F 2 "" H 3650 3150 50  0001 C CNN
F 3 "" H 3650 3150 50  0001 C CNN
	1    3650 3150
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56C6286D
P 3650 3550
F 0 "#PWR?" H 3520 3590 50  0001 L CNN
F 1 "GND" H 3650 3450 50  0000 C CNN
F 2 "" H 3650 3550 60  0000 C CNN
F 3 "" H 3650 3550 60  0000 C CNN
	1    3650 3550
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56C64BF6
P 3900 3550
F 0 "R?" H 3950 3600 50  0000 C CNN
F 1 "R" H 3950 3500 50  0000 C CNN
F 2 "" H 3900 3550 50  0001 C CNN
F 3 "" H 3900 3550 50  0001 C CNN
	1    3900 3550
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 56C64CDC
P 4350 4300
F 0 "C?" H 4400 4370 50  0000 C CNN
F 1 "10n" H 4400 4230 50  0000 C CNN
F 2 "" H 4350 4300 50  0001 C CNN
F 3 "" H 4350 4300 50  0001 C CNN
	1    4350 4300
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 56C686AB
P 4500 4000
F 0 "C?" H 4550 4070 50  0000 C CNN
F 1 "C" H 4550 3930 50  0000 C CNN
F 2 "" H 4500 4000 50  0001 C CNN
F 3 "" H 4500 4000 50  0001 C CNN
	1    4500 4000
	0    1    1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 56C68778
P 4500 4150
F 0 "#PWR?" H 4370 4190 50  0001 L CNN
F 1 "GND" H 4500 4050 50  0000 C CNN
F 2 "" H 4500 4150 60  0000 C CNN
F 3 "" H 4500 4150 60  0000 C CNN
	1    4500 4150
	1    0    0    -1  
$EndComp
$Comp
L PFET Q?
U 1 1 56C79D18
P 5200 3950
F 0 "Q?" V 5050 3950 50  0000 L CNN
F 1 "PFET" H 4950 3790 50  0000 L CNN
F 2 "" H 5200 3950 50  0001 C CNN
F 3 "" H 5200 3950 50  0001 C CNN
	1    5200 3950
	0    -1   1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 56C7BFBF
P 4500 3600
F 0 "#PWR?" H 4370 3640 50  0001 L CNN
F 1 "GND" H 4500 3500 50  0000 C CNN
F 2 "" H 4500 3600 60  0000 C CNN
F 3 "" H 4500 3600 60  0000 C CNN
	1    4500 3600
	0    -1   -1   0   
$EndComp
$Comp
L R R?
U 1 1 56C7C3EA
P 4200 3450
F 0 "R?" H 4250 3500 50  0000 C CNN
F 1 "R" H 4250 3400 50  0000 C CNN
F 2 "" H 4200 3450 50  0001 C CNN
F 3 "" H 4200 3450 50  0001 C CNN
	1    4200 3450
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 56C7DF8E
P 4350 3600
F 0 "R?" H 4400 3650 50  0000 C CNN
F 1 "R" H 4400 3550 50  0000 C CNN
F 2 "" H 4350 3600 50  0001 C CNN
F 3 "" H 4350 3600 50  0001 C CNN
	1    4350 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4900 3400 4900 4100
Wire Wire Line
	4200 3550 4200 4100
Wire Wire Line
	1600 4400 1600 4600
Wire Wire Line
	1600 4100 1600 4300
Wire Wire Line
	2300 4200 2400 4200
Wire Wire Line
	2450 4500 2500 4500
Wire Wire Line
	2650 5100 2750 5100
Wire Wire Line
	5850 3950 5400 3950
Connection ~ 5000 4400
Wire Wire Line
	5000 4400 5000 3950
Wire Wire Line
	5000 3950 5100 3950
Connection ~ 4850 5400
Wire Wire Line
	5850 5400 5850 3950
Connection ~ 4350 3750
Wire Wire Line
	4350 3750 4350 4300
Wire Wire Line
	3900 3750 5300 3750
Connection ~ 3900 3300
Wire Wire Line
	4200 3000 3500 3000
Wire Wire Line
	3900 3300 3850 3300
Wire Wire Line
	4200 3400 4900 3400
Wire Wire Line
	4200 3600 4350 3600
Wire Wire Line
	4450 3600 4500 3600
Connection ~ 4200 3400
Connection ~ 4900 3950
Wire Wire Line
	4200 3000 4200 3050
Wire Wire Line
	4200 3350 4200 3450
Connection ~ 4200 3600
Connection ~ 3900 3150
Connection ~ 3500 3000
Wire Wire Line
	4450 5950 4450 5900
Wire Wire Line
	4850 5400 4850 6100
Wire Wire Line
	4500 3950 4500 4000
Wire Wire Line
	2850 4300 2800 4300
Wire Wire Line
	2450 4800 2450 4900
Wire Wire Line
	2850 5100 3000 5100
Wire Wire Line
	4300 3950 4700 3950
Connection ~ 4500 3950
Wire Wire Line
	4800 3950 4900 3950
Wire Wire Line
	4500 4100 4500 4150
Wire Wire Line
	4300 3950 4300 4200
Wire Wire Line
	4300 4200 4200 4200
Connection ~ 4900 4400
Connection ~ 4350 4300
Wire Wire Line
	4200 4300 4700 4300
Connection ~ 4350 4400
Wire Wire Line
	3650 3500 3650 3550
Wire Wire Line
	3900 3150 3900 3550
Wire Wire Line
	3750 3150 4000 3150
Connection ~ 3500 3150
Wire Wire Line
	3500 3150 3650 3150
Wire Wire Line
	3500 3300 3550 3300
Wire Wire Line
	3500 2950 3500 3300
Wire Wire Line
	9950 2350 9400 2350
Connection ~ 9950 1750
Connection ~ 9950 2050
Wire Wire Line
	9950 2050 10050 2050
Wire Wire Line
	9950 1750 9950 2350
Wire Wire Line
	9100 1750 10050 1750
Connection ~ 9750 1750
Connection ~ 9750 2350
Wire Wire Line
	9400 2350 9400 2250
Wire Wire Line
	9400 2250 9100 2250
Wire Wire Line
	9100 2150 9550 2150
Wire Wire Line
	9750 2050 9750 2000
Wire Wire Line
	9750 1450 9750 1200
Wire Wire Line
	9550 1650 9100 1650
Wire Wire Line
	2900 4750 2900 4800
Connection ~ 4350 4900
Wire Wire Line
	3850 6550 3750 6550
Connection ~ 4050 6300
Connection ~ 4450 5900
Wire Wire Line
	4050 5900 4050 6050
Wire Wire Line
	4050 6150 4050 6350
Wire Wire Line
	4050 6300 4250 6300
Wire Wire Line
	4050 6650 4050 6700
Connection ~ 4450 6400
Wire Wire Line
	4450 6050 4450 6100
Wire Wire Line
	4250 6900 4100 6900
Wire Wire Line
	4450 6550 4450 6400
Wire Wire Line
	4450 6650 4450 6700
Connection ~ 4850 7000
Wire Wire Line
	4450 7000 4850 7000
Wire Wire Line
	2000 4600 2000 4700
Connection ~ 2000 4600
Connection ~ 2450 4900
Connection ~ 2900 4800
Connection ~ 4850 6400
Wire Wire Line
	4450 6400 5150 6400
Connection ~ 4850 5900
Wire Wire Line
	4050 5900 5150 5900
Wire Wire Line
	4850 6650 4850 7050
Wire Wire Line
	4850 6200 4850 6550
Connection ~ 5250 4400
Wire Wire Line
	5250 4400 5250 4500
Wire Wire Line
	5150 4400 5550 4400
Wire Wire Line
	4200 4400 5050 4400
Connection ~ 5250 4500
Wire Wire Line
	4200 4500 4550 4500
Wire Wire Line
	5550 4650 5550 4700
Wire Wire Line
	4650 4500 5550 4500
Connection ~ 4400 5200
Wire Wire Line
	4750 5200 4750 5300
Wire Wire Line
	4750 5300 5400 5300
Wire Wire Line
	5400 5300 5400 5050
Wire Wire Line
	5400 4800 5400 4950
Wire Wire Line
	5250 5100 5250 5150
Connection ~ 5250 4800
Wire Wire Line
	4750 4800 5400 4800
Wire Wire Line
	4750 4900 4750 4800
Wire Wire Line
	4200 5000 5050 5000
Wire Wire Line
	4200 4700 5050 4700
Connection ~ 2800 4200
Wire Wire Line
	2800 4300 2800 4200
Wire Wire Line
	2950 4300 3000 4300
Connection ~ 2450 4600
Connection ~ 2900 4600
Connection ~ 7850 2550
Wire Wire Line
	7050 2050 7050 2550
Wire Wire Line
	7050 1450 7050 1950
Wire Wire Line
	7900 1450 7050 1450
Connection ~ 7850 2650
Wire Wire Line
	7900 2650 7850 2650
Wire Wire Line
	7850 2550 7850 2700
Wire Wire Line
	7050 2550 7900 2550
Wire Wire Line
	7900 2350 7850 2350
Wire Wire Line
	7900 2250 7850 2250
Wire Wire Line
	7900 1750 7850 1750
Wire Wire Line
	7900 1650 7850 1650
Wire Wire Line
	9100 2050 9750 2050
Wire Wire Line
	9100 1950 9200 1950
Wire Wire Line
	9100 1550 9400 1550
Wire Wire Line
	9100 1450 9200 1450
Wire Wire Line
	4200 4900 4750 4900
Wire Wire Line
	4200 4800 4350 4800
Connection ~ 4400 5300
Wire Wire Line
	4200 5300 4400 5300
Wire Wire Line
	4200 5200 4750 5200
Wire Wire Line
	4400 5550 4400 5600
Connection ~ 4400 5400
Wire Wire Line
	4400 5300 4400 5450
Wire Wire Line
	4200 5400 5850 5400
Wire Wire Line
	2600 4500 3000 4500
Wire Wire Line
	1600 4600 3000 4600
Wire Wire Line
	2000 4800 2000 4850
Connection ~ 2650 4100
Wire Wire Line
	2600 5350 2600 5400
Connection ~ 2600 5200
Wire Wire Line
	2600 5250 2600 5200
Wire Wire Line
	2450 5200 3000 5200
Connection ~ 2950 5500
Connection ~ 2950 5400
Wire Wire Line
	2950 5400 2950 5550
Wire Wire Line
	3000 5500 2950 5500
Wire Wire Line
	2850 5400 3000 5400
Wire Wire Line
	3000 5300 2850 5300
Connection ~ 2950 4100
Wire Wire Line
	2950 3950 2250 3950
Wire Wire Line
	2950 4100 2950 3950
Wire Wire Line
	2650 4400 2650 4350
Wire Wire Line
	2650 4100 2650 4250
Wire Wire Line
	1600 4100 2750 4100
Wire Wire Line
	2850 4100 3000 4100
Connection ~ 2650 4200
Connection ~ 2650 4400
Wire Wire Line
	2300 4400 3000 4400
Wire Wire Line
	2500 4200 3000 4200
Connection ~ 2900 4500
Wire Wire Line
	2450 4600 2450 4700
Wire Wire Line
	2900 4600 2900 4650
Wire Wire Line
	2350 4900 3000 4900
Wire Wire Line
	2800 4800 3000 4800
Wire Wire Line
	3900 3650 3900 3750
Wire Wire Line
	9400 1550 9400 1450
Wire Wire Line
	9300 1450 9750 1450
Connection ~ 9400 1450
Connection ~ 9750 1450
Connection ~ 9750 2050
Wire Wire Line
	9300 1950 9400 1950
Wire Wire Line
	9400 1950 9400 2050
Connection ~ 9400 2050
Wire Wire Line
	5550 4500 5550 4550
$EndSCHEMATC

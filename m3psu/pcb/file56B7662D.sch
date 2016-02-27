EESchema Schematic File Version 2
LIBS:agg-kicad
LIBS:m3psu-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 6
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
L PCA9502 IC?
U 1 1 56D1F883
P 1600 2950
F 0 "IC?" H 1100 3750 50  0000 L CNN
F 1 "PCA9502" H 1100 2150 50  0000 L CNN
F 2 "agg:HVQFN24-NXP" H 1100 2050 50  0001 L CNN
F 3 "http://cache.nxp.com/documents/data_sheet/PCA9502.pdf" H 1100 1950 50  0001 L CNN
F 4 "2212086" H 1100 1850 50  0001 L CNN "Farnell"
	1    1600 2950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 56D22EC3
P 2250 3750
F 0 "#PWR?" H 2120 3790 50  0001 L CNN
F 1 "GND" H 2250 3650 50  0000 C CNN
F 2 "" H 2250 3750 60  0000 C CNN
F 3 "" H 2250 3750 60  0000 C CNN
	1    2250 3750
	1    0    0    -1  
$EndComp
$Comp
L 3v3 #PWR?
U 1 1 56D2502F
P 950 2150
F 0 "#PWR?" H 950 2260 50  0001 L CNN
F 1 "3v3" H 950 2240 50  0000 C CNN
F 2 "" H 950 2150 60  0000 C CNN
F 3 "" H 950 2150 60  0000 C CNN
	1    950  2150
	1    0    0    -1  
$EndComp
NoConn ~ 1000 3050
$Comp
L 3v3 #PWR?
U 1 1 56D26472
P 800 3400
F 0 "#PWR?" H 800 3510 50  0001 L CNN
F 1 "3v3" H 800 3490 50  0000 C CNN
F 2 "" H 800 3400 60  0000 C CNN
F 3 "" H 800 3400 60  0000 C CNN
	1    800  3400
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 56D265B7
P 850 3450
F 0 "R?" H 900 3500 50  0000 C CNN
F 1 "1K" H 900 3400 50  0000 C CNN
F 2 "" H 850 3450 50  0001 C CNN
F 3 "" H 850 3450 50  0001 C CNN
	1    850  3450
	1    0    0    -1  
$EndComp
NoConn ~ 2200 3150
NoConn ~ 2200 3050
NoConn ~ 2200 2950
NoConn ~ 2200 2850
Connection ~ 2250 3450
Wire Wire Line
	2200 3450 2250 3450
Connection ~ 2250 3550
Wire Wire Line
	2250 3550 2200 3550
Connection ~ 2250 3650
Wire Wire Line
	2250 3650 2200 3650
Wire Wire Line
	2250 3350 2250 3450
Wire Wire Line
	2250 3450 2250 3550
Wire Wire Line
	2250 3550 2250 3650
Wire Wire Line
	2250 3650 2250 3750
Wire Wire Line
	2200 3350 2250 3350
Wire Wire Line
	2500 2550 2200 2550
Wire Wire Line
	2500 1700 2500 2550
Wire Wire Line
	2150 1700 2500 1700
Wire Wire Line
	2450 1600 2150 1600
Wire Wire Line
	2450 2450 2450 1600
Wire Wire Line
	2200 2450 2450 2450
Connection ~ 950  2550
Wire Wire Line
	950  2550 1000 2550
Connection ~ 950  2450
Wire Wire Line
	950  2450 1000 2450
Connection ~ 950  2350
Wire Wire Line
	950  2350 1000 2350
Connection ~ 950  2250
Wire Wire Line
	1000 2250 950  2250
Wire Wire Line
	950  2150 950  2250
Wire Wire Line
	950  2250 950  2350
Wire Wire Line
	950  2350 950  2450
Wire Wire Line
	950  2450 950  2550
Wire Wire Line
	950  2550 950  2650
Wire Wire Line
	950  2650 950  2850
Wire Wire Line
	950  2650 1000 2650
Wire Wire Line
	800  3650 1000 3650
Wire Wire Line
	800  3400 800  3450
Wire Wire Line
	800  3450 800  3650
Wire Wire Line
	1000 3450 950  3450
Wire Wire Line
	850  3450 800  3450
Connection ~ 800  3450
Wire Wire Line
	800  3150 1000 3150
Wire Wire Line
	800  1600 800  1900
Wire Wire Line
	800  1900 800  3150
Wire Wire Line
	800  1600 900  1600
Wire Wire Line
	900  1700 750  1700
Wire Wire Line
	750  1700 750  1950
Wire Wire Line
	750  1950 750  2950
Wire Wire Line
	750  2950 750  3250
Wire Wire Line
	750  3250 1000 3250
$Comp
L R R?
U 1 1 56D2A504
P 2250 2250
F 0 "R?" H 2300 2300 50  0000 C CNN
F 1 "100K" H 2300 2200 50  0000 C CNN
F 2 "" H 2250 2250 50  0001 C CNN
F 3 "" H 2250 2250 50  0001 C CNN
	1    2250 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	2200 2250 2250 2250
$Comp
L 3v3 #PWR?
U 1 1 56D2A582
P 2400 2200
F 0 "#PWR?" H 2400 2310 50  0001 L CNN
F 1 "3v3" H 2400 2290 50  0000 C CNN
F 2 "" H 2400 2200 60  0000 C CNN
F 3 "" H 2400 2200 60  0000 C CNN
	1    2400 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 2200 2400 2250
Wire Wire Line
	1000 2950 750  2950
Connection ~ 750  2950
Wire Wire Line
	950  2850 1000 2850
Connection ~ 950  2650
Text Notes 1100 4000 0    60   ~ 0
Address 0x50\n(0xA0 on datasheet)
$Sheet
S 2700 1250 1250 550 
U 56D5BD87
F0 "Regulator 1" 60
F1 "file56D5BD86.sch" 60
F2 "SDA" B L 2700 1600 60 
F3 "SCL" B L 2700 1700 60 
F4 "RUN0" I R 3950 1600 60 
F5 "RUN1" I R 3950 1700 60 
F6 "VOUT1" U R 3950 1450 60 
F7 "VOUT0" U R 3950 1350 60 
F8 "~SMB_ALERT" O L 2700 1350 60 
$EndSheet
Wire Wire Line
	2200 2650 4050 2650
Wire Wire Line
	4050 2650 4050 1600
Wire Wire Line
	4050 1600 3950 1600
Wire Wire Line
	3950 1700 4100 1700
Wire Wire Line
	4100 1700 4100 2750
Wire Wire Line
	4100 2750 2200 2750
Wire Wire Line
	2400 2250 2350 2250
Wire Wire Line
	2700 1600 2550 1600
Wire Wire Line
	2550 1600 2550 1900
Wire Wire Line
	2550 1900 800  1900
Connection ~ 800  1900
Wire Wire Line
	750  1950 2600 1950
Wire Wire Line
	2600 1950 2600 1700
Wire Wire Line
	2600 1700 2700 1700
Connection ~ 750  1950
Text Notes 900  1150 0    60   ~ 0
Cameras (5V @ 1A)\nPyro MCU (3.3V @ 0.1A)\nAddress 0x40
Text Notes 2700 1150 0    60   ~ 0
Radio (5V @ 0.35A)\nRadio MCU (3.3V @ 0.25A)\nAddress 0x41
$Sheet
S 900  1250 1250 550 
U 56B76640
F0 "Regulator 0" 60
F1 "file56B7663F.sch" 60
F2 "SDA" B L 900 1600 60 
F3 "SCL" B L 900 1700 60 
F4 "RUN0" I R 2150 1600 60 
F5 "RUN1" I R 2150 1700 60 
F6 "VOUT0" U R 2150 1350 60 
F7 "VOUT1" U R 2150 1450 60 
F8 "~SMB_ALERT" O L 900 1350 60 
$EndSheet
Wire Notes Line
	600  800  4250 800 
Wire Notes Line
	4250 800  4250 4150
Wire Notes Line
	4250 4150 600  4150
Wire Notes Line
	600  4150 600  800 
Text Notes 600  750  0    120  ~ 0
BOARD 1
$EndSCHEMATC

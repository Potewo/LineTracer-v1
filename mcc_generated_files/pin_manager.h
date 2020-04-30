/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.80.0
        Device            :  PIC16F18877
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set MOTOR_1 aliases
#define MOTOR_1_TRIS                 TRISAbits.TRISA1
#define MOTOR_1_LAT                  LATAbits.LATA1
#define MOTOR_1_PORT                 PORTAbits.RA1
#define MOTOR_1_WPU                  WPUAbits.WPUA1
#define MOTOR_1_OD                   ODCONAbits.ODCA1
#define MOTOR_1_ANS                  ANSELAbits.ANSA1
#define MOTOR_1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define MOTOR_1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define MOTOR_1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define MOTOR_1_GetValue()           PORTAbits.RA1
#define MOTOR_1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define MOTOR_1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define MOTOR_1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define MOTOR_1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define MOTOR_1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define MOTOR_1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define MOTOR_1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define MOTOR_1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set MOTOR_2 aliases
#define MOTOR_2_TRIS                 TRISAbits.TRISA3
#define MOTOR_2_LAT                  LATAbits.LATA3
#define MOTOR_2_PORT                 PORTAbits.RA3
#define MOTOR_2_WPU                  WPUAbits.WPUA3
#define MOTOR_2_OD                   ODCONAbits.ODCA3
#define MOTOR_2_ANS                  ANSELAbits.ANSA3
#define MOTOR_2_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define MOTOR_2_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define MOTOR_2_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define MOTOR_2_GetValue()           PORTAbits.RA3
#define MOTOR_2_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define MOTOR_2_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define MOTOR_2_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define MOTOR_2_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define MOTOR_2_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define MOTOR_2_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define MOTOR_2_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define MOTOR_2_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set SWITCH_2 aliases
#define SWITCH_2_TRIS                 TRISBbits.TRISB1
#define SWITCH_2_LAT                  LATBbits.LATB1
#define SWITCH_2_PORT                 PORTBbits.RB1
#define SWITCH_2_WPU                  WPUBbits.WPUB1
#define SWITCH_2_OD                   ODCONBbits.ODCB1
#define SWITCH_2_ANS                  ANSELBbits.ANSB1
#define SWITCH_2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SWITCH_2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SWITCH_2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SWITCH_2_GetValue()           PORTBbits.RB1
#define SWITCH_2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SWITCH_2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SWITCH_2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SWITCH_2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SWITCH_2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define SWITCH_2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define SWITCH_2_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define SWITCH_2_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set SWITCH_1 aliases
#define SWITCH_1_TRIS                 TRISBbits.TRISB2
#define SWITCH_1_LAT                  LATBbits.LATB2
#define SWITCH_1_PORT                 PORTBbits.RB2
#define SWITCH_1_WPU                  WPUBbits.WPUB2
#define SWITCH_1_OD                   ODCONBbits.ODCB2
#define SWITCH_1_ANS                  ANSELBbits.ANSB2
#define SWITCH_1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SWITCH_1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SWITCH_1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SWITCH_1_GetValue()           PORTBbits.RB2
#define SWITCH_1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SWITCH_1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SWITCH_1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SWITCH_1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SWITCH_1_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SWITCH_1_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SWITCH_1_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define SWITCH_1_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RED_LED aliases
#define RED_LED_TRIS                 TRISBbits.TRISB3
#define RED_LED_LAT                  LATBbits.LATB3
#define RED_LED_PORT                 PORTBbits.RB3
#define RED_LED_WPU                  WPUBbits.WPUB3
#define RED_LED_OD                   ODCONBbits.ODCB3
#define RED_LED_ANS                  ANSELBbits.ANSB3
#define RED_LED_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RED_LED_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RED_LED_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RED_LED_GetValue()           PORTBbits.RB3
#define RED_LED_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RED_LED_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RED_LED_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define RED_LED_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define RED_LED_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define RED_LED_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define RED_LED_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define RED_LED_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set BLUE_LED_2 aliases
#define BLUE_LED_2_TRIS                 TRISBbits.TRISB4
#define BLUE_LED_2_LAT                  LATBbits.LATB4
#define BLUE_LED_2_PORT                 PORTBbits.RB4
#define BLUE_LED_2_WPU                  WPUBbits.WPUB4
#define BLUE_LED_2_OD                   ODCONBbits.ODCB4
#define BLUE_LED_2_ANS                  ANSELBbits.ANSB4
#define BLUE_LED_2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define BLUE_LED_2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define BLUE_LED_2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define BLUE_LED_2_GetValue()           PORTBbits.RB4
#define BLUE_LED_2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define BLUE_LED_2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define BLUE_LED_2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define BLUE_LED_2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define BLUE_LED_2_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define BLUE_LED_2_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define BLUE_LED_2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define BLUE_LED_2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set BLUE_LED_1 aliases
#define BLUE_LED_1_TRIS                 TRISBbits.TRISB5
#define BLUE_LED_1_LAT                  LATBbits.LATB5
#define BLUE_LED_1_PORT                 PORTBbits.RB5
#define BLUE_LED_1_WPU                  WPUBbits.WPUB5
#define BLUE_LED_1_OD                   ODCONBbits.ODCB5
#define BLUE_LED_1_ANS                  ANSELBbits.ANSB5
#define BLUE_LED_1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define BLUE_LED_1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define BLUE_LED_1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define BLUE_LED_1_GetValue()           PORTBbits.RB5
#define BLUE_LED_1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define BLUE_LED_1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define BLUE_LED_1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define BLUE_LED_1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define BLUE_LED_1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define BLUE_LED_1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define BLUE_LED_1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define BLUE_LED_1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LEFT_SENSOR_1 aliases
#define LEFT_SENSOR_1_TRIS                 TRISCbits.TRISC0
#define LEFT_SENSOR_1_LAT                  LATCbits.LATC0
#define LEFT_SENSOR_1_PORT                 PORTCbits.RC0
#define LEFT_SENSOR_1_WPU                  WPUCbits.WPUC0
#define LEFT_SENSOR_1_OD                   ODCONCbits.ODCC0
#define LEFT_SENSOR_1_ANS                  ANSELCbits.ANSC0
#define LEFT_SENSOR_1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LEFT_SENSOR_1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LEFT_SENSOR_1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LEFT_SENSOR_1_GetValue()           PORTCbits.RC0
#define LEFT_SENSOR_1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LEFT_SENSOR_1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LEFT_SENSOR_1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LEFT_SENSOR_1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LEFT_SENSOR_1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LEFT_SENSOR_1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LEFT_SENSOR_1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LEFT_SENSOR_1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LEFT_SENSOR_2 aliases
#define LEFT_SENSOR_2_TRIS                 TRISCbits.TRISC1
#define LEFT_SENSOR_2_LAT                  LATCbits.LATC1
#define LEFT_SENSOR_2_PORT                 PORTCbits.RC1
#define LEFT_SENSOR_2_WPU                  WPUCbits.WPUC1
#define LEFT_SENSOR_2_OD                   ODCONCbits.ODCC1
#define LEFT_SENSOR_2_ANS                  ANSELCbits.ANSC1
#define LEFT_SENSOR_2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LEFT_SENSOR_2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LEFT_SENSOR_2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LEFT_SENSOR_2_GetValue()           PORTCbits.RC1
#define LEFT_SENSOR_2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LEFT_SENSOR_2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LEFT_SENSOR_2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LEFT_SENSOR_2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LEFT_SENSOR_2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LEFT_SENSOR_2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LEFT_SENSOR_2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LEFT_SENSOR_2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LEFT_MARKER aliases
#define LEFT_MARKER_TRIS                 TRISCbits.TRISC2
#define LEFT_MARKER_LAT                  LATCbits.LATC2
#define LEFT_MARKER_PORT                 PORTCbits.RC2
#define LEFT_MARKER_WPU                  WPUCbits.WPUC2
#define LEFT_MARKER_OD                   ODCONCbits.ODCC2
#define LEFT_MARKER_ANS                  ANSELCbits.ANSC2
#define LEFT_MARKER_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LEFT_MARKER_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LEFT_MARKER_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LEFT_MARKER_GetValue()           PORTCbits.RC2
#define LEFT_MARKER_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LEFT_MARKER_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LEFT_MARKER_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LEFT_MARKER_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LEFT_MARKER_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LEFT_MARKER_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LEFT_MARKER_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LEFT_MARKER_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set RIGHT_MARKER aliases
#define RIGHT_MARKER_TRIS                 TRISEbits.TRISE0
#define RIGHT_MARKER_LAT                  LATEbits.LATE0
#define RIGHT_MARKER_PORT                 PORTEbits.RE0
#define RIGHT_MARKER_WPU                  WPUEbits.WPUE0
#define RIGHT_MARKER_OD                   ODCONEbits.ODCE0
#define RIGHT_MARKER_ANS                  ANSELEbits.ANSE0
#define RIGHT_MARKER_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define RIGHT_MARKER_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define RIGHT_MARKER_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define RIGHT_MARKER_GetValue()           PORTEbits.RE0
#define RIGHT_MARKER_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define RIGHT_MARKER_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define RIGHT_MARKER_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define RIGHT_MARKER_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define RIGHT_MARKER_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define RIGHT_MARKER_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define RIGHT_MARKER_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define RIGHT_MARKER_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set RIGHT_SENSOR_2 aliases
#define RIGHT_SENSOR_2_TRIS                 TRISEbits.TRISE1
#define RIGHT_SENSOR_2_LAT                  LATEbits.LATE1
#define RIGHT_SENSOR_2_PORT                 PORTEbits.RE1
#define RIGHT_SENSOR_2_WPU                  WPUEbits.WPUE1
#define RIGHT_SENSOR_2_OD                   ODCONEbits.ODCE1
#define RIGHT_SENSOR_2_ANS                  ANSELEbits.ANSE1
#define RIGHT_SENSOR_2_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define RIGHT_SENSOR_2_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define RIGHT_SENSOR_2_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define RIGHT_SENSOR_2_GetValue()           PORTEbits.RE1
#define RIGHT_SENSOR_2_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define RIGHT_SENSOR_2_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define RIGHT_SENSOR_2_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define RIGHT_SENSOR_2_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define RIGHT_SENSOR_2_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define RIGHT_SENSOR_2_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define RIGHT_SENSOR_2_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define RIGHT_SENSOR_2_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set RIGHT_SENSOR_1 aliases
#define RIGHT_SENSOR_1_TRIS                 TRISEbits.TRISE2
#define RIGHT_SENSOR_1_LAT                  LATEbits.LATE2
#define RIGHT_SENSOR_1_PORT                 PORTEbits.RE2
#define RIGHT_SENSOR_1_WPU                  WPUEbits.WPUE2
#define RIGHT_SENSOR_1_OD                   ODCONEbits.ODCE2
#define RIGHT_SENSOR_1_ANS                  ANSELEbits.ANSE2
#define RIGHT_SENSOR_1_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define RIGHT_SENSOR_1_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define RIGHT_SENSOR_1_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define RIGHT_SENSOR_1_GetValue()           PORTEbits.RE2
#define RIGHT_SENSOR_1_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define RIGHT_SENSOR_1_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define RIGHT_SENSOR_1_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define RIGHT_SENSOR_1_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define RIGHT_SENSOR_1_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define RIGHT_SENSOR_1_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define RIGHT_SENSOR_1_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define RIGHT_SENSOR_1_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
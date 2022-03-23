/**
  Generated Pins header File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.h

  Summary:
    This is generated driver header for pins. 

  Description:
    This header file provides APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

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

#ifndef PINS_H
#define PINS_H

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

// get/set RB0 aliases
#define RB0_TRIS                 TRISBbits.TRISB0
#define RB0_LAT                  LATBbits.LATB0
#define RB0_PORT                 PORTBbits.RB0
#define RB0_WPU                  WPUBbits.WPUB0
#define RB0_OD                   ODCONBbits.ODCB0
#define RB0_ANS                  ANSELBbits.ANSELB0
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()           PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define RB0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define RB0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB4 aliases
#define RB4_TRIS                 TRISBbits.TRISB4
#define RB4_LAT                  LATBbits.LATB4
#define RB4_PORT                 PORTBbits.RB4
#define RB4_WPU                  WPUBbits.WPUB4
#define RB4_OD                   ODCONBbits.ODCB4
#define RB4_ANS                  ANSELBbits.ANSELB4
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()           PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define RB4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RC0 aliases
#define RC0_TRIS                 TRISCbits.TRISC0
#define RC0_LAT                  LATCbits.LATC0
#define RC0_PORT                 PORTCbits.RC0
#define RC0_WPU                  WPUCbits.WPUC0
#define RC0_OD                   ODCONCbits.ODCC0
#define RC0_ANS                  ANSELCbits.ANSELC0
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()           PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define RC0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define RC0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC4 aliases
#define RC4_TRIS                 TRISCbits.TRISC4
#define RC4_LAT                  LATCbits.LATC4
#define RC4_PORT                 PORTCbits.RC4
#define RC4_WPU                  WPUCbits.WPUC4
#define RC4_OD                   ODCONCbits.ODCC4
#define RC4_ANS                  ANSELCbits.ANSELC4
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()           PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define RC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

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



#endif // PINS_H
/**
 End of File
*/
<!-- Please do not change this logo with link -->

[![MCHP](images/microchip.png)](https://www.microchip.com)

# Slew Control Feature of the GPIO Module

This code example shows Slew Control feature of the GPIO module.

## Related Documentation

- [MPLAB Code Configurator](https://www.microchip.com/en-us/development-tools-tools-and-software/embedded-software-center/mplab-code-configurator)
- [PIC18-Q43 Family Product Page](https://www.microchip.com/en-us/products/microcontrollers-and-microprocessors/8-bit-mcus/pic-mcus/pic18-q43)
## Software Used


- MPLAB® X IDE 6.0.0 or newer [(MPLAB® X IDE 6.0)](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-x-ide?utm_source=GitHub&utm_medium=TextLink&utm_campaign=MCU8_MMTCha_MPAE_Examples&utm_content=pic18f57q43-cnano-slew-control-mplab-melody-github)
- MPLAB® XC8 2.35.0 or newer compiler [(MPLAB® XC8 2.35)](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-xc-compilers?utm_source=GitHub&utm_medium=TextLink&utm_campaign=MCU8_MMTCha_MPAE_Examples&utm_content=pic18f57q43-cnano-slew-control-mplab-melody-github)
- MPLAB® Code Configurator (MCC) 5.1.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Code Configurator (MCC) Melody 2.0.46 or newer [(microchip.com/en-us/tools-resources/configure/mplab-code-configurator/melody)](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator/melody)
- Microchip PIC18F-Q Series Device Support (1.13.211) or newer [(packs.download.microchip.com/)](https://packs.download.microchip.com/)

## Hardware Used

- [Microchip PIC18F57Q43 Curiosity Nano Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/DM164150)
- [Microchip Curiosity Nano Base for Click boards](https://www.microchip.com/developmenttools/ProductDetails/AC164162)
- [Breadboard](https://www.mouser.com/ProductDetail/426-FIT0008)
- [Switches](https://www.mouser.com/ProductDetail/506-FSM2JRT)
- [LED](https://www.mouser.com/ProductDetail/941-C5SMFRJECT0W0BB2)
- [Resistor](https://www.mouser.com/ProductDetail/603-CFR-25JB-52-330R)
- [Wire Kit](https://www.mouser.com/ProductDetail/424-WIRE-KIT)

### Hardware User Guide
<img src="images/gpio_setup.png" width="600"/></a>

This example code will show you how to set up the GPIO using Limited Slew on one Port and Maximum Slew on the other. Using the  PIC18F57Q43 curiosity nano. This Setup is used in the Microchip University class called GPIO this example doesn't use the switches or the LEDs.  This example can be accomplished with just the curiosity nano and an Oscilloscope to caputure the waveforms.

## Setup

Connect the PIC18F57Q43 Curiosity nano board to the PC.

Connect RB0 and RC0 to two seperate channels of an oscilloscope.

MCC with the Melody library was used to implement this example as shown in the following section.
## Clock Control Configuration
In the *Project Resources* window click Clock Control. 

![Melody - Clock Control](images/src_clock_control.png)

After selecting the "Clock Control" option, a window on the right side of the MPLAB-IDE will appear called *Clock Control Easy View*. Use the Dropdown boxes to select HFINTOSC, 4MHz, and divide by 4 as shown in the figure below.

![Melody - Clock Control Easy View](images/src_clock_control_easy_view.png)

## Pin Configuration
In the *Pins Grid View* find RB0, RB4, RC0 and RC4 for the Output pins. Select by clicking the corresponding padlock symbol. find RA5 for LED1, and RF3 for LED0 for imput selection by clicking the corresponding padlock symbol

**Pins Grid View**
![Melody - SW1 and SW2 connections](images/src_pin_selection.png)

## Pin Control Configuration
In the *Project Resources* window selecting the "Pins" option.

![Melody - Pins ](images/src_pins.png)
After selecting the "Pins" option, a window on the right side of the MPLAB-IDE will appear called "Pins". Slide the bar on the left side to view more of the window.
De-select the "Analog" checkbox on all pins in this window to disable analog functionality, which is not needed for this example. 

![Melody - De-select analog](images/src_deselect_analog.png)

Use the "Custom Name" field to rename IO_RB0 to RB0, IO_RB4 to RB4, IO_RC0 to RC0 and IO_RC4 to RC4. 
![Melody - Rename output pins](images/src_rename_pins.png)
## Slew Control Configuration
Click the Slew checkbox for RC0 and RC4 to make them Maximum slew. 

![Melody - Slew Control](images/src_deselect_slew_portc.png)

In the *Project Resources* window click the "Generate" button.

![Melody - Generate](images/src_click_generate.png)

Once the code has been generated by Melody, select the "Clean and Build" button.

![Melody - clean and build](images/src_click_clean_and_build.png)

Once the project has been successfully built the output window should show the following message:

![Melody - build successful](images/src_build_successful.png)
Copy this code into the main loop of main.c

        RB0_Toggle();
        if(RB0_LAT == 0) RB4_LAT = 0;
        if(RB0_LAT == 1) RB4_LAT = 1;
        RC0_Toggle();
        if(RC0_LAT == 0) RC4_LAT = 0;
        if(RC0_LAT == 1) RC4_LAT = 1;
![Melody - build successful](images/src_main_code.png)

Click the "Clean and Build" button once the routine has been copied into the main loop.

![Melody - clean and build](images/src_click_clean_and_build.png)

Once the project has been successfully built the output window should show the following message:

![Melody - build successful](images/src_build_successful.png)

Click the "Program Device" button.

![Melody - click program](images/src_click_program.png)

Once the device has been successfully programmed, the output window should show the following message:

![Melody - program successful](images/src_program_successful.png)
## Operation

<!-- Explain how to operate the example. Depending on complexity, step-by-step instructions and/or tables and/or images can be used -->
If you have an oscilloscope handy you can do the same but I will show the scope plots so you can see visually what to look for.
The first scope signal is the signal on RB0 this shows the signal and how long it takes to change state it shows 29 ns. The second scope signal is on RC0 and it shows about 10 ns there’s a little bit of ringing in the signal but it still changes faster than the pin with limited slew rate control.

Limited Slew
![Operation - Limited Slew Rate](images/limited_slew_rate.png)
Maximum Slew
![Operation - Maximum Slew rate](images/maximum_slew_rate.png)

## Summary

<!-- Summarize what the example has shown -->
The example has shown how Melody can be used to easily configure pins, using the Slew Control feature of the GPIO module module of the PIC18F57Q43 device.
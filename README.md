# Two traffic light control system

## About
This project consists in a system to control two traffic lights at a simple two-way intersection. This system was implemented for the MSP430F1121 hardware. In addition to the C code, the project also contains simulation in the Proteus 8 software.
Each traffic light was configured to spend 10 seconds with the green light on, 5 seconds with the yellow light on and 15 seconds with the red light on. This configuration can be changed through the arguments of the __delay_cycles functions. Each unit within this function is equivalent to 1µs, that is, 1000000 units are equivalent to 1 second.

## System simulation (Proteus 8):
<img alt="Systems simulations" title="System simulation" src="./gif_semaforo.gif">


## Additional Information
The program was developed using the free trial version of IAR Embedded Workbench for MSP430 IDE, available at https://www.iar.com/products/architectures/iar-embedded-workbench-for-msp430/iar-embedded-workbench-for-msp430---free-trial-version/.

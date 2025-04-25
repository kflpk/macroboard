<img src="https://socialify.git.ci/kflpk/macroboard/image?custom_description=Simple+macro+keyboard+for+computers.&description=1&font=Rokkitt&language=1&name=1&pattern=Circuit+Board&stargazers=1&theme=Dark" alt="macroboard" width="640" height="320" />

# Macroboard

Simple ortholinear 4x4 macro keyboard with rotary encoder.

![macroboard](images/macroboard.jpg)

## Schematics

The schematics and PCB were created using KiCAD 7. The microcontroller used is an STM32F103C6T6.

![schematic](images/MacroBoard-400dpi.png)

## PCB
Front | Back
:-------------------------:|:-------------------------:
![Front layer](images/pcb/MacroBoard-F_Cu.png) | ![Back layer](images/pcb/MacroBoard-B_Cu.png)

## Mechanical parts

Mechanical design was done using Fusion 360. The front plate is a 1.5 mm thick aluminium plate, cut using a 3-axis CNC machine.
Standoffs for the board and plate were 3D printed with TPU.

You can find all the necessary files in the "mechanical" folder.

![alu_plate](images/alu_plate.jpg)

## Dependencies
```
arm-none-eabi-binutils
arm-none-eabi-gcc
arm-none-eabi-newlib
```

## Authors
* Kacper Filipek
* Krzysztof Sikora

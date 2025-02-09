# Arduino

The Arduino is a popular microcontroller board that is used by hobbyists, students, and professionals to build a wide range of projects. It is based on the Atmel AVR microcontroller and comes with a simple programming environment that allows you to write, compile, and upload code to the board.

The difference between mircrocontroller is it runs at execution speed of 16MHz and has 32KB of flash memory, 2KB of SRAM, and 1KB of EEPROM. It is good for handling hardware low level task. While a microprocessor is a general-purpose processor that is used in computers and other devices. It runs at a much higher execution speed of 2 GHz and has more memory 8 GB and processing power than a microcontroller. It is good for high computation power tasks.

Arduino files are called Sketch. It is written in C++ language.

```c
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}
```

For debugging, you can use the Serial Monitor to print messages to the console.

```c
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello Arduino");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("In the loop");
  delay(500);
}
```

**Breadboard** is a device that is used to build electronic circuits without soldering. It has holes that are connected in rows and columns. You can insert components like resistors, capacitors, and LEDs into the holes to build a circuit. It is a great way to prototype your projects before soldering them onto a PCB. A ground rail and power rail are used to connect the components to the power supply.

**Resistor** is a passive two-terminal electrical component that resists the flow of current. It is used to limit the current in a circuit and protect the components from damage. The resistance is measured in ohms and is denoted by the symbol Ω. There are two types of resistors: fixed resistors and variable resistors. For my project, I used a 220-ohm / 10K resistor to limit the current to the LED. Resistor color code is used to identify the resistance value of the resistor. The color bands on the resistor represent the resistance value, tolerance, and temperature coefficient. [Resistor calculator](https://www.calculator.net/resistor-calculator.html)
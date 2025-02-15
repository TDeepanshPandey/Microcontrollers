# Arduino

The Arduino is a popular microcontroller board that is used by hobbyists, students, and professionals to build a wide range of projects. It is based on the Atmel AVR microcontroller and comes with a simple programming environment that allows you to write, compile, and upload code to the board.

The difference between mircrocontroller is it runs at execution speed of 16MHz and has 32KB of flash memory, 2KB of SRAM, and 1KB of EEPROM. It is good for handling hardware low level task. While a microprocessor is a general-purpose processor that is used in computers and other devices. It runs at a much higher execution speed of 2 GHz and has more memory 8 GB and processing power than a microcontroller. It is good for high computation power tasks.

Arduino files are called Sketch. It is written in C++ language.

## Basics

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

## Programming Concepts

**Variables** are used to store data in a program. They have a name, a type, and a value. There are different types of variables in Arduino: int, float, char, and boolean. You can use variables to store sensor readings, control the brightness of an LED, or store the state of a switch.

```c
int sensorValue = 0; // -32,768 to 32,767 instead use long
long sensorValue = 0; // -2,147,483,648 to 2,147,483,647
double temperature = 25.5;
bool isOn = true; 
String name = "Arduino";
```

Note - **Use #define to define constants**

```c  
#define LED_PIN 13
```

**functions** are used to group code into reusable blocks. They have a name, a return type, and a list of parameters. You can use functions to read sensor data, control the brightness of an LED, or calculate the temperature.

```c  
int add(int a, int b) {
  return a + b;
}
```

**conditions** are used to make decisions in a program. They have a condition and a block of code that is executed if the condition is true. You can use conditions to check if a sensor reading is above a certain threshold, turn on an LED if a switch is pressed, or stop a motor if it is overheating.

```c
if (sensorValue > 100) {
  // do something
} else if (sensorValue < 50) {
  // do something else
} else {
  // do something else
}
```

**loops** are used to repeat a block of code multiple times. There are different types of loops in Arduino: for, while, and do-while. You can use loops to read sensor data, control the brightness of an LED, or wait for a button press.

```c
for (int i = 0; i < 10; i++) {
  // do something
}

while (sensorValue < 100) {
  // do something
}
```

**Arrays** are used to store multiple values in a single variable. They have a name, a type, and a size. You can use arrays to store sensor readings, control the brightness of multiple LEDs, or store the state of multiple switches.

```c
int sensorValues[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
sensorValues[0] = 10;
```

## Pins

Arduino have two types of pins to control hardware components. One are digital pins with numbers directly and other are analog pins represented by starting letter A in front.

### How to work with digital pins?

First set digital PIN mode then OUTPUT then Write Digital (data to calculator) set value HIGH / LOW (BINARY 0 and 1 value).

```c

#define LED_PIN 12

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  delay(3000);
}

void loop(){
  digitalWrite(LED_PIN, LOW);
  delay(500);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
}
```
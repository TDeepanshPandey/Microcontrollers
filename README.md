# Microcontrollers

Learning about Microcontrollers

- Embedded Systems: Microcontrollers are the heart of embedded systems. They are small, low-cost, low-power, self-contained computer designed to control a specific function. They are used in everyday devices like microwave ovens, washing machines, and cars. They are also used in industrial machines, medical devices, and scientific instruments.

- Program: Microcontrollers are programmed to perform a specific task. They are programmed using a high-level language like C or assembly language. The program is stored in the microcontroller's memory and executed when the microcontroller is powered on.

- IDE - Editor, Compiler and Debugger

- Microcontroller: A microcontroller is a small computer on a single integrated circuit. It contains a processor core, memory, and input/output peripherals. The processor core executes the program stored in memory, and the input/output peripherals interface with the external world.

## Binary Numbers

- Binary Numbers: Microcontrollers use binary numbers to represent data. A binary number is a number expressed in the base-2 numeral system, which uses only two symbols: typically 0 (zero) and 1 (one). For example, the binary number 1011 is equivalent to the decimal number 11.

- There are a couple of different way that you can indicate that a number is in binary instead of
decimal.
 Use a suffix of B: 1010B
 Use a suffix of b: 1010b
 Use a suffix of 2: 1010<sub>2</sub>

| Decimal | Binary  |
|---------|---------|
| 0       | 0       |
| 1       | 1       |
| 2       | 10      |
| 3       | 11      |
| 4       | 100     |
| 5       | 101     |
| 6       | 110     |
| 7       | 111     |
| 8       | 1000    |
| 9       | 1001    |
| 10      | 1010    |
| 11      | 1011    |
| 12      | 1100    |
| 13      | 1101    |
| 14      | 1110    |
| 15      | 1111    |
| 16      | 10000   |

- To convert a decimal number into binary, use the Short Division by Two with Remainder method.

- let us convert a number from binary to decimal. To do this, we will use the Position Notation Method. This method is very powerful and is used by most designers when working with binary numbers. It makes use of the powers of 2.

## Hexadecimal Numbers

Base 16 (hexadecimal) numbers are used in computing to represent binary numbers in a more compact form. Each hexadecimal digit represents four binary digits (bits), and four hexadecimal digits represent a 16-bit binary number.
In hexadecimal, we have 16 different numbers to use in counting. Since we only have 10 in decimal, we have to add 6 new “numbers.” Universally, we use the letters A, B, C, D, E, and F as the last 6 numbers. 

| Decimal | Binary | Hexadecimal |
|---------|--------|-------------|
| 0       |    0   | 0           |
| 1       |    1   | 1           |
| 2       |   10   | 2           |
| 3       |   11   | 3           |
| 4       |  100   | 4           |
| 5       |  101   | 5           |
| 6       |  110   | 6           |
| 7       |  111   | 7           |
| 8       | 1000   | 8           |
| 9       | 1001   | 9           |
| 10      | 1010   | A           |
| 11      | 1011   | B           |
| 12      | 1100   | C           |
| 13      | 1101   | D           |
| 14      | 1110   | E           |
| 15      | 1111   | F           |
| 16      | 10000  | 10          |

The hexadecimal equivalent of 10111010111B is 5D7.

There are a couple of different way that you can indicate that a number is in hexadecimal:
- Use a suffix of H: 5D7H
- Use a prefix of 0x: 0x5D7
- Use a suffix of 16: 5D7<sub>16</sub>

## Other Terms

- A single binary digit is called a **bit**. A bit is denoted by a lower case b. If someone is referencing
8-bits, they may denoted it as 8b.

- A **byte** is 8-bits long and has 256 different possible values (28 = 256). A byte is denoted by an
upper case B. (Note, this can cause some confusion since B is also used to denote binary, so
make sure you check the context.) If someone is referencing 8-bytes, they may denote it as 8B.

- You may occasionally hear a reference to something called a **nibble**. This term in not used often
anymore, but it does have some uses. A nibble is 4-bits long, and as such, it has 16 different
possible values (24 = 16). A full byte is represented by two hexadecimal digits; therefore, it is
common to display a byte of information as two nibbles.

- When using **words** to describe an amount of memory, you may see the terms word (16-bits),
double word (32-bits), or quad word (64-bits). Again, in practice, this typically comes down to
how your organization and your microcontroller vendor define “word.”

| Prefix   | Number of bytes      | Abbreviation | Binary Power       |
|----------|----------------------|--------------|--------------------|
| kilobyte | 1,024                | 1KB          | 2<sup>10</sup>     |
| megabyte | 1,048,576            | 1MB          | 2<sup>20</sup>     |
| gigabyte | 1,073,741,824        | 1GB          | 2<sup>30</sup>     |
| terabyte | 1,099,511,627,776    | 1TB          | 2<sup>40</sup>     |


## Digital Logic

### AND Operator

The AND operator is a binary operator that takes two binary numbers as input and produces a binary number as output. The output is 1 if both inputs are 1, and 0 otherwise.

| A | B | A AND B |
|---|---|---------|
| 0 | 0 | 0       |
| 0 | 1 | 0       |
| 1 | 0 | 0       |
| 1 | 1 | 1       |

There is also a “byte-wise” AND operator, &&. Unlike the bit-wise & operator which looks at individual bits, && is only concerned with the total value of its inputs

### OR Operator

The OR operator is a binary operator that takes two binary numbers as input and produces a binary number as output. The output is 1 if either input is 1, and 0 otherwise.

| A | B | A OR B |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 1      |

There is also a “byte-wise” OR operator, ||. Unlike the bit-wise | operator which looks at individual bits, || is only concerned with the total value of its inputs.

### NOT Operator

The NOT operator is a unary operator that takes a single binary number as input and produces a binary number as output. The output is the complement of the input, i.e., 1 if the input is 0, and 0 if the input is 1.

| A | NOT A |
|---|-------|
| 0 | 1     |
| 1 | 0     |

The bit-wise NOT also has a symbol, a tilde (~)

### XOR Operator

The XOR operator is a binary operator that takes two binary numbers as input and produces a binary number as output. The output is 1 if the inputs are different, and 0 if the inputs are the same.

| A | B | A XOR B |
|---|---|---------|
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |

## Microcontroller Architecture

Microcontroller have a Central Processing Unit, Program Memory, Data Memory, peripherals. Volatile memory is used to store data that is lost when the power is turned off.

Program Memory - Non-volatile memory is used to store data that is retained when the power is turned off. Microcontrollers use non-volatile memory Earlier they use to use ROM but now there EPROM or UV EPROM. One time programmable memory is also used. Flash memory can be reprogrammed multiple times. Most popular choice today. FeRAM or FRAM is also used. It is faster than flash memory and has a longer life span.

Data Memory - Volatile memory is used to store data that is lost when the power is turned off. SRAM is used for data memory. It is faster than flash memory and has a longer life span. Electrically Erasable Programmable Read-Only Memory (EEPROM) is also used. It is slower than flash memory but has a longer life span.

# Exercise: Develop a program Program that uses volatile variables to simulate a simple hardware device (e.g., temperature sensor) and reads/writes values to it


**Length as Designed:** 30 minutes

## Introduction
In this exercise, we will develop a C program that simulates a simple hardware device (e.g., a temperature sensor) using volatile variables. The program will demonstrate reading and writing values to this simulated hardware device. The use of volatile variables ensures that operations on the device's state are handled correctly, considering potential asynchronous updates.

### Starter Files

open a blank editor

### Requirements
* Implement volatile variables to simulate the hardware device's state. 
* Develop functions to read and write values to the simulated device. 
* Demonstrate the program's functionality with sample input and output.

**Output**
```markdown
Wrote 50 to the hardware device.
Read 50 from the hardware device.
Wrote 75 to the hardware device.
Read 75 from the hardware device.
Wrote 100 to the hardware device.
Read 100 from the hardware device.
```

**Conclusion**
This exercise provided a simplified demonstration of simulating a hardware device using volatile variables in C. By implementing functions to read and write values to the device within a single execution context. Understanding volatile variables is essential for managing state changes in scenarios where data may be updated asynchronously, such as interacting with hardware peripherals or shared memory locations.
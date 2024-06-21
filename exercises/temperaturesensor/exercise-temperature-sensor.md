# Exercise: Develop a program that simulates a temperature sensor, allowing users to read the current temperature and toggle between Celsius and Fahrenheit readings using bitwise operations.

**Length as Designed:** 30 minutes

## Introduction
In this exercise, we'll develop a program in C that simulates a temperature sensor. The program will allow users to read the current temperature and toggle between Celsius and Fahrenheit readings using bitwise operations. This exercise aims to demonstrate how bitwise operations can be used to efficiently manage and switch between temperature units.

### Starter Files

open a blank editor

### Requirements

* Implement a function to read the temperature in both Celsius and Fahrenheit. 
* Use bitwise operations to toggle between Celsius and Fahrenheit readings. 
* Display the current temperature in the chosen unit. 
* Ensure the program handles input and output appropriately.

**Sample Input:**
No user input is required, the program should internally manage the toggling between Celsius and Fahrenheit.

**Output**

```markdown
Current temperature: 25.00°C
Current temperature: 77.00°F

```
**Conclusion**
Implementation of a temperature sensor simulation in C, explains the use of bitwise operations to toggle between Celsius and Fahrenheit units. By using bitwise XOR `(^)` to switch between units and simple conversion functions (`celsiusToFahrenheit` and `fahrenheitToCelsius`), program efficiently managed temperature readings in different units. Bitwise operations in this context demonstrates their practical usage in embedded systems and low-level programming scenarios.

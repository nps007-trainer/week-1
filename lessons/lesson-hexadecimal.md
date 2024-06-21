# Lesson: Hexadecimal Format and Conversion

## Introduction

For counting and solving maths problems, we use a base-ten system. However, if you would like to program computers, you need to learn about hexadecimal, a number system based on sixteen. Furthermore, computer scientists create the computer systems that we use to surf the net, play games online, and even read online lessons.

In addition, they program computers using a number system called hexadecimal. It is very important in terms of the computer world. Let us discuss its definitions and conversions.

## Learning Outcomes

By the end of this lesson, you will be able to:

1. Identify Hexadecimal Digits.
2. Convert Binary to Hexadecimal.
3. Convert Hexadecimal to Binary.
4. Convert Decimal to Hexadecimal.
5. Convert Hexadecimal to Decimal.
6. Conversion functions: `strtol()`, `sprintf()`


## Definition
The hexadecimal number system is a type of number system, that has a base value equal to 16. Remember that Hexa means six as a hexagon with six sides and decimal refers to a system based on the number ten. Thus it describes a base-16 number system. That is, it describes a numbering system containing 16 sequential numbers as base units including zero. That means there are only 16 symbols or possible digit values, there are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F. Where A, B, C, D, E and F are single bit representations of decimal value 10, 11, 12, 13, 14 and 15 respectively. It requires only 4 bits to represent value of any digit. Hexadecimal numbers are indicated by the addition of either an 0x prefix or an h suffix.

If you see an “0x” prefix, it indicates that the number is in hexadecimal. For example, “0x3A” represents a hexadecimal value.

Hexadecimal number systems can be converted to other number systems such as binary number (base-2), octal number (base-8) and decimal number systems (base-10).

![hexadecimal](_assets/hexa-funny1.jpeg)

**Hexadecimal Number System Table**
Below is the table of hexadecimal number systems with equivalent values of the binary and decimal number systems.
|Decimal Numbers | 4-bit Binary Number | Hexadecimal Number|
|---|---|---|
0|0000|0
1|0001|1
2|0010|2
3|0011|3
4|0100|4
5|0101|5
6|0110|6
7|0111|7
8|1000|8
9|1001|9
10|1010|A
11|1011|B
12|1100|C
13|1101|D
14|1110|E
15|1111|F

### Hexadecimal Number System Conversions
Below table shows the representation of a hexadecimal number into decimal form.

|**Hexadecimal**|0|1|2|3|4|5|6|7|8|9|A|B|C|D|E|F|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Decimal**|0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|

We must know the letters in a hex all have decimal equivalents, as listed in the table above.

For converting it to a decimal manually, we must start by multiplying the hex number by 16. Then, we raise it to a power of zero and increase that power by 1 each time from right to left. We start from the right of the hexadecimal number and go to the left for applying the powers. Each time we multiply a number by 16, the power of 16 increases.

Example : To convert hexadecimal number 25 to decimal, follow these two steps:

1. Start from one's place in 25 : multiply ones place with 16^0^, tens place with 16^1^, hundreds place with 16^2^ and so on from right to left.
2. Add all the product we got from step 1 to get the decimal equivalent of 25.
   
Using the above steps, here is the solution for converting 25 to decimal number.

Decimal equivalent of "5" = 5 × 16^0^ = 5
Decimal equivalent of "2" = 2 × 16^1^ = 32
Decimal equivalent of "25" = 32+5
**25~16~ = 37~10~**

**Decimal to Hexadecimal Conversion**

To convert from decimal to hexadecimal we will divide the decimal number by 16 repeatedly. Then, write the last remainder we obtained in the hex equivalent column. If the remainder is more than nine then change it to its hex letter. Now, the answer is taken from the last remainder obtained to the first remainder. Let us see the a decimal number 21 to represent in Hexadecimal.

![hexadecimal](_assets/decimal-hexa.png)

**(21)~10~ = (15)~16~**

**Binary to Hexadecimal Conversion**
Binary to hexadecimal conversion is a simple method to do. You just have to put the values of the binary number to the relevant hexadecimal number.

Example: Convert (11100011)~2~ to hexadecimal.
Solution: From the table, we can write, 11100011 as E3.

Therefore, (11100011)~2~= (E3)~16~

## Applications of Hexadecimal Number System
* It is helpful to describe colors on Web pages. Each of the three primary colors (i.e., red, green and blue) is represented by two hexadecimal digits to create 255 possible values, thus resulting in more than 16 million possible colors. 
* Hexadecimal numbers are also easier to read and write than binary or decimal numbers for Computer Professionals.

### Code snippet of Converting Decimal to Hexadecimal using **format specifier**

```c
#include <stdio.h>
int main() {
    int decimalNumber = 45;
    printf("Hexadecimal number is: %X", decimalNumber);
    return 0;
}
```
**Output:**
```markdown
Hexadecimal number is: 2D
```
**Conversion functions: `strtol()`, `sprintf()`**
Let us discuss about string to long function this function is included in the standard utilities library of C. This function takes a string and also take a pointer to a string and also takes a base and it returns a long value. 
`strtol()` is used to convert a string representation of a number into an integer. Let us understand its purpose and usage:

1. String to Integer Conversion : `strtol()` converts a string (`const char *str`) to a long integer (`long int`)
2. Handles Different Bases : It supports conversion from strings representing numbers in different bases (e.g. decimal, hexadecimal, octal) based on the format of the input string.
3. Handles and Reports Error

**Syntax of strtol()**

```c
long int strtol(const char *str, char **endptr, int base)
```
* `str` : The string to be converted to a long int.
* `entptr` :  A pointer to a `char *`  variable where `strtol` stores the address of the first character that it couldn't convert to a number. This allows for error checking and processing of remaining characters after the number.
* `base` : Specifies the numeric base of the string representation (e.g., 10 for decimal, 16 for hexadecimal). It can range from 2 to 36. If `base` is 0, `strtol` detects the base automatically (using 0x prefix for hexadecimal, etc.).

**Return Value:**
* Long Integer: If successful, `strtol` returns the converted long integer value.
* 0: If no valid conversion could be performed (e.g., the string does not contain any digits).
* LONG_MAX or LONG_MIN (defined in `<limits.h>`): If the converted value overflows or underflows the `long int` range.


Let us understand with the example using strtol() 
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[30] = "2030300 This is test";
    char *ptr;
    long ret = strtol(str, &ptr, 10);
    printf("The number (unsigned long integer) is %ld\n", ret);
    printf("String part is |%s|\n", ptr);
    return 0;
}

```
**Output:**

```markdown
The number (unsigned long integer) is 2030300
String part is | This is test|
```

Let's understand another example using logical conditions

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345";
    char *endptr;
    long int num;

    // Convert string to long integer
    num = strtol(str, &endptr, 10);

    if (endptr == str) {
        printf("No digits were found.\n");
    } else if (*endptr != '\0') {
        printf("Further characters after number: %s\n", endptr);
    } else {
        printf("The number is: %ld\n", num);
    }

    return 0;
}

```

### Conclusion
1. Identify Hexadecimal Digits:
Hexadecimal uses base-16 with digits from 0 to 9 and letters A to F (representing values 10 to 15).
2. Conversion:
Binary to Hexadecimal: Group binary digits into sets of 4 and convert each group to its corresponding hex digit.
Hexadecimal to Binary: Replace each hex digit with its 4-bit binary representation.
Decimal to Hexadecimal: Convert decimal to binary, then follow the binary-to-hex conversion.
Hexadecimal to Decimal: Convert each hex digit to its decimal equivalent.
3. Functions:
strtol(): Converts a string to a long integer based on a specified base.
sprintf(): Formats and stores data as a string.


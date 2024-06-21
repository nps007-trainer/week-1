# Lesson: Binary representation and Bitwise operations

## Introduction to Binary representation

Binary representation is fundamental in computer science and programming. It involves expressing data in the binary numeral system, which uses only two digits: 0 and 1. This system is pivotal in how computers store, process, and transmit information at the most basic level.

![binary](_assets/bit.png)

**Decimal To Binary**
In decimal to binary conversion, we convert a base 10 number to a base 2 number by using simple methods. For example, if 12~10~ is a decimal number then its equivalent binary number is 1100~2~. Thus, it is easy to convert the given decimal to binary using simple tricks which you will discuss in this lesson.

**Deep dive**
 Decimal number has base 10 and a binary number has base 2. In decimal to binary conversion, the base of the number also changes, i.e. from base 10 to base 2. All the decimal numbers have their equivalent binary numbers. These binary numbers are majorly used in computer applications, where it is used for programming or coding purposes. This is because computers understand the language of binary digits, 0 and 1.

 **Binary Number System Definition**
 The binary number system is a base-2 number system in which numbers are only represented by two digits: 0 and 1. A bit is an abbreviated form of 'binary digit,' which is the smallest unit of data in a computer. A bit has only one binary value: either 1 or 0. It's important to note that the Most Significant Bit (MSB) is the bit on the far left end of a binary number, while the Least Significant Bit (LSB) is the bit on the far right end (LSB). 1110~2~, 1001~2~, etc are examples of binary numbers.

 ![binary](_assets/decimal-binary.png)   

From the above diagram, let's look at the example below.

**Convert 2 in Binary**

2 in binary is (10)~2~. The number 2 represents (2)~10~, which is a decimal number. We know that the binary number system uses only two digits, such as 0 and 1. Hence, to convert 2 in a binary number system, follow the below steps.

Step 1: Divide 2 by 2. The integer quotient obtained in this step is used as a dividend for the next step. Continue this process until we get the quotient becomes 0.

|**Dividend**| **Remainder**|
|---|--|
| 2/2 =1 | 0|
| 1/2 = 0  | 1|

Step 2: Now, write the remainder in reverse chronological order (i.e.) from bottom to top.

Hence, the decimal number 2 in binary is (10)~2~.

## Bitwise operators
Bitwise operators are used to manipulate the data at bit level. It operates on integers only. It may not be applied to float. In arithmetic-logic unit (which is within the CPU), mathematical operations like: addition, subtraction, multiplication and division are done in bit-level which makes processing faster and saves power. To perform bit-level operations in C programming, bitwise operators are used.

![binary](_assets/bitwisebinary.png)

Decimal values are converted into binary values which are the sequence of bits and bit wise operators work on these bits.

Bit wise operators in C language are shown in the table below.

|**Operator** | **Meaning** |
|-----        |-----        |
| & | Bitwise AND |
|\| | Bitwise OR |
|^| Bitwise XOR |
|<<| Bitwise left |
|>>| Bitwise right |
|~| One's complement |

**TRUTH TABLE FOR BIT WISE OPERATION**

| x | y | x \| y |x & y |x ^ y |
|--|--|--|--|--|
|0|0|0|0|0|
|0|1|1|0|1|
|1|0|1|0|1|
|1|1|1|1|0|

**Examples:**

**Bitwise AND operator &**
The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0.

Let us suppose the bitwise AND operation of two integers 12 and 25.
(12)~10~ = (00001100)~2~ 
(25)~10~ = (00011001)~2~

Bit Operation of 12 and 25
    00001100
&   00011001
 _____________________
 (00001000)~2~ = (8)~10~ 

**Example #1: Bitwise AND**
  ```c
  #include <stdio.h>
int main()
{
 int a = 12, b = 25;
 printf("Output = %d", a&b);
 return 0;
}
  ```
**Output:**
```markdown
Output=8
```

**Bitwise OR operator |**

The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. In C Programming, bitwise OR operator is denoted by |.
(12)~10~ = (00001100)~2~ 
(25)~10~ = (00011001)~2~

Bitwise OR Operation of 12 and 25

 00001100
| 00011001
  _____________________
 (00011101)~2~ = (29)~10~

**Example #2: Bitwise OR**
```c
int main()
{
 int a = 12, b = 25;
 printf("Output = %d", a|b);
 return 0;
}
```
**Output:**
```markdown
Output=29
```

**Bitwise XOR (exclusive OR) operator ^**
The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by ^.
(12)~10~ = (00001100)~2~ 
(25)~10~ = (00011001)~2~

Bitwise XOR Operation of 12 and 25
 00001100
\| 00011001
 _____________________
 (00010101)~2~ = (21)~10~

 **Example #3: Bitwise XOR**
 ```c
#include <stdio.h>
int main()
{
 int a = 12, b = 25;
 printf("Output = %d", a^b);
 return 0;
}
```

**Output:**
```markdown
Output = 21
```

**Bitwise complement operator ~**

Bitwise compliment operator is an unary operator (works on only one operand). It changes 1 to 0 and 0 to 1. It is denoted by ~.

(35)~10~ = (00100011)~2~

Bitwise complement Operation of 35

~ 00100011
 ________
 (11011100)~2~ = (220)~10~ 

 **There are two Bitwise shift operators in C programming:**

 - Right shift  operator
 - Left shift operator
  
  **Right shift operator**

  Right shift operator shifts all bits towards right by certain number of specified bits. It is denoted by >>.

  **Left shift operator**

  Left shift operator shifts all bits towards left by certain number of specified bits. It is denoted by <<.

  The purpose and usage of Bitwise operators is discussed in the activity.

  **Conclusion**
  Bit manipulation controls hardware components and Bitwise operations optimize algorithms. Efficiently manage pixel data and flags in grahics and game engines. Interact with low-level device hardware registers.
  


 
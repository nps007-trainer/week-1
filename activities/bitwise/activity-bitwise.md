# Activity: Demonstrate usage of bitwise operators to perform tasks such as setting, clearing, or toggling specific bits 

## Introduction
In our lesson, we have seen the use of bitwise operators in C programming with different examples. In this activity, we will look at a few uses of bitwise operators, like setting, clearing, or toggling specific bits.

Bit Manipulation is often used for low-level operations working with memory registers, changing the status flags in the data structures. To reset the status flags, implementing alternate behaviour based on the status flags.


### Let us start with the `Set` a bit in C.

To set a bit or Nth bit in C language, we use the **Bitwise OR operator** with the bitwise Left shift operator. The SETting an Nth bit means, We need to make the Nth bit as One(1). So if the bit in the Nth position is Zero(0), Then we need to change it to One(1). If the bit at the Nth position is One(1), We don't do anything and the bit will have the value as One(1).

**Logic to Set Nth bit or Set a bit:**

To understand the logic of Set Nth bit, We need to know the truth table of OR. Here is the truth table of bitwise OR.

|Bit-1|Bit-2|OR(Bit-1\|Bit-2)|
|--|--|--|
|0|0|0|
|1|0|1|
|0|1|1|
|1|1|1|
To Set the Nth bit, Use the following bitwise OR logic.

`InputNumber = InputNumber | (1 << bitPosition)`

Here,
The `InputNumber` is the number where we are trying to SET the bit
The `bitPosition` is the position of the bit (Nth bit) in the binary sequence of `InputNumber`

So we are shifting the number `1`, The `bitposition` times in the left-side direction. Then performing the bitwise OR operator.

**Understand the example to Set Nth bit in the binary sequence of `InputNumber`**

Set the 2nd bit in the binary sequence of `InputNumber 120`

The binary equivalent of `InputNumber-120` is 1111000.

Now, To set the bit at position 2. The bit position starts with index 0, So the Least significant bit(LSB) in the above binary sequence position is 0.

To Set the 2nd bit in the number 120 refer the code snippet below:

```markdown
InputNumber = 120 | (1 << 2);
```

Look at the calculation below

```markdown
InputNumber-120 is 1111000
(1 << 2)  is 0000 0100 
 Result = (InputNumber | (1 << 2) is 0111 1100.

```
**Explanation**

Looking at the above calculation, The bit at the 2nd position of the InputNumber(120) is changed from zero(0) to One(1). So we are able to SET the 2nd bit and The InputNumber value became 124.

`The final result of InputNumber is 124 which is 1111100 in binary.`

**Activity 1**
Write a C program to Set Nth Bit.

Steps:
- Take the Input from the user and store it in variable num
- Get the bit number to set from the user and store it in variable bit
- Take backup of num to variable called backup for later use
- Now Set the bit using the above bitwise OR logic i.e `num = num | (1 << bit);`
- Display the results 

```c
#include<stdio.h>
int main()
{
    int num, bit, i;
 
    // Take input from the user
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter bit number to Set : ");
    scanf("%d", &bit);
 
    // Logic to check for negative numbers
    if(num < 0 || bit < 0)
    {
        printf("Invalid Input: Try again\n");
        return 0;
    }
 
    // store original input in backup variable
    int backup = num;
 
    // Set the bit
    num = num | (1 << bit);    // num |= (1<< bit)
 
    printf("Number(%d) after SETing bit at %d position became %d \n", backup, bit, num);
 
    return 0;
}
```

**Output:**

```markdown
Enter a number: 120
Enter bit number to Set : 2
Number(120) after SETing bit at 2 position became 124

### Now let's understand Clear Nth bit
To CLEAR a bit or CLEAR Nth bit in C language, We use the **Bitwise AND operator** with the bitwise Left shift operator and One’s complement Operator.

The CLEARing an Nth bit means, We need to make the Nth bit as Zero(0). So if the bit in the Nth position is One(1), Then we need to change it to Zero(0). If the bit at the Nth position is Zero(0), We don’t do anything and the bit will have the value as Zero(0).

**Logic to Clear Nth bit or Clear a bit:**
To understand the logic of Clear Nth bit, We need to know the truth table of AND. Here is the truth table of bitwise AND

|Bit-1|Bit-2|AND (Bit-1&Bit-2)|
|--|--|--|
|0|0|0|
|1|0|0|
|0|1|0|
|1|1|1|

To CLEAR the Nth bit, Use the following bitwise AND logic.

`InputNumber = InputNumber & (~ (1 << bitPosition))`

Here,
The `InputNumber` is the Given Number
The `bitPosition` is the position of the bit (Nth bit) in the binary sequence of InputNumber

So we are shifting the number 1, The `bitposition` times in the left-side direction and Applying the `one’s complement`. Finally performing the bitwise AND operation.

**Understand the example to CLEAR  Nth bit in the binary sequence of `InputNumber`**

Set the 4th bit in the binary sequence of `InputNumber 120`

The binary equivalent of `InputNumber-120` is 1111000.

Now, To set the bit at position 4. The bit position starts with index 0, So the Least significant bit(LSB) in the above binary sequence position is 1.

To Set the 4th bit in the number 120 refer the code snippet below:

```markdown
InputNumber = 120 & ~ (1 << 4);
```

Look at the calculation below

```markdown
InputNumber-120 is 1111000      
~(1 << 4)  is 11101111 
 Result = (InputNumber &  ~(1 << 4) is 11100000.

```
**Explanation**

Looking at the above calculation, The bit at the 4th position of the InputNumber(120) is changed from  One(1) to Zero(0). So we are able to Clear the 4th bit and The InputNumber value became 224.

`The final result of InputNumber is 224 which is 11100000 in binary.`

**Activity 2**
Write a C program to Clear  Nth Bit.

Steps :
1. Accept the input number from the user and store it in variable num, Also take the bit position and store it in bit variable.
2. Check for negative numbers and display an error notice to the user.
3. Take a backup of the num to backup variable for later usage.
4. CLEAR the bit using the Clear Nth bit logic – num = num & ~(1 << bit);
5. Display the Results.
   
```c
  #include<stdio.h>
int main()
{
    int num, bit, i;
 
    // Take input from the user
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter bit number to Clear : ");
    scanf("%d", &bit);
 
    // Don't allow negative numbers
    if(num < 0 || bit < 0)
    {
        printf("Invalid Input: Try again\n");
        return 0;
    }
 
    // Take backup of 'num'
    int backup = num;
 
    // Clear the bit
    num = num & ~(1 << bit);    // num &= ~(1<< bit)
 
    printf("Number(%d) after CLEARing bit at %d position became %d \n", backup, bit, num);
 
    return 0;
}  
```

**Outpu:**

```markdown
Enter a number: 120
Enter bit number to Clear : 4
Number(120) after CLEARing bit at 4 position became 224
```

**Toggle Nth Bit or Toggle a Bit**
Toggling Nth Bit means, If the Nth bit is One(1), Then we need to Invert it and make it Zero(0). Similarly, If the Nth bit is Zero(0), We need to change it to One(1).
To Toggle Nth bit, We use the **Bitwise XOR operator** with the bitwise Left shift operator.

**Logic to Toggle Nth bit or Invert a bit**

To understand the logic of the Toggle Nth bit, We need to know the truth table of XOR.

|Bit-1|Bit-2|XOR (Bit-1 ^ Bit-2)|
|--|--|--|
|0|0|0|
|1|0|1|
|0|1|1|
|1|1|0|

To Toggle the Nth bit, Use the following bitwise XOR logic.

`InputNumber = InputNumber ^ (1 << bitPosition)`

Here,
The `InputNumber` is the Given Number
The `bitPosition` is the position of the bit (Nth bit) in the binary sequence of `InputNumber`
So we are shifting the number 1, The `bitposition` number of positions in the left-side direction and Performing the bitwise XOR operation.

**Understand the example to Toggle  Nth bit in the binary sequence of `InputNumber`**

Let’s look at an example: Set the 4th bit in number 38.

```markdown
InputNumber = 120 ^  (1 << 4);
```

InputNumber = 120.

bitPosition = 4.

The binary equivalent of the number 120 is 1111000.
(1 << 4)  is 0001 0000
 Result = 120 ^ (1 << 4) is 0110 1000.

**Explanation**

Looking at the above calculation, The bit at the 4th position of the InputNumber(120) is toggled from  One(1) to Zero(0). 

`The final result of InputNumber is 104 which is 1101000 in binary.`

**Activity 3**
Write a C program to Toggle Nth Bit.

Steps :
1. Take the input number num and bit position bit from the user.
2. Display error on negative numbers
3. Take back up of the num and store it in a variable named backup
4. Now Toggle the bit using the Toggle Nth bit logic – num = num ^ (1 << bit);
5. Print the results onto the console.

```c
#include<stdio.h>
int main()
{
    int num, bit, i;
 
    // Take input from the user
 
    printf("Enter a number: ");
    scanf("%d", &num);
 
    // Take bit number
    printf("Enter bit number to Toggle : ");
    scanf("%d", &bit);
 
    // Don't allow negative numbers
    if(num < 0 || bit < 0)
    {
        printf("Invalid Input: Try again\n");
        return 0;
    }
 
    // store the original number in the backup variable
    int backup = num;
 
    // Toggle the bit or Invert the bit
    num = num ^ (1 << bit);    // num ^= ~(1<< bit)
 
    // Print result
    printf("Number(%d) after Toggling bit at %d position became %d \n", backup, bit, num);
 
    return 0;
}
```

**Outpu:**

```markdown
Enter a number : 120
Enter bit number to Toggle : 4
Number(120) after Toggling bit at 4 position became 104
```

**Conclusion**
Bitwise operations play a significant role in data encryption algorithms and compression techniques. Efficiently manipulating bits helps reduce the size of encrypted data or compressed files.
These operations are commonly used for low-level programming, embedded systems and optimization. Bit manipulation is crucial for controlling individual pins , registers and flags in hardware components. These are useful in gaming and graphics. Bitwise manipulation is used in packet parsing, checksum calculation and protocol flags.

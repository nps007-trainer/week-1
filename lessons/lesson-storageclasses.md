# Lesson: Utilize register storage, volatile keyword, and variable scope effectively

## Introduction
In this lesson, we'll explore the concepts of register storage, the volatile keyword, and variable scope in C programming. These features play a crucial role in optimizing code and managing variable lifetimes. Every Variable in a program has memory associated with it. As discussed earlier, memory requirement of variables is different for different types of variables.  In C, Memory is allocated & released at different places.

Let's take a look at the table below:

|**Term** | **Definition**|
|--|--|
|**Scope**|Region or Part of Program in which Variable is accessible.|
|**Extent**|Period of time during which memory is associated with variable.|
|**Storage Class**|Period of time during which memory is associated with variable|




## Learning Outcomes
By the end of this lesson, you will be able to:

1. Understand the purpose and usage of the register storage class. 
2. Explain how the volatile keyword affects variable optimization. 
3. Differentiate between variable scopes (block, function, and file). 
4. Utilize the static and extern keywords effectively.

Let's explore the topic in detail:

## Definition of Storage Classes

In C language, each variable has a storage class which is used to define scope and life time of a variable.

Storage: Any variable declared in a program can be stored either in memory or registers.
Registers are small amount of storage in CPU. The data stored in registers has fast access compared to data stored in memory.
 
Storage class of a variable gives information about the location of the variable
in which it is stored, initial value of the variable, if storage class is not specified; scope of the variable; life of the variable.

1. Where the variable is stored
   Storage Classdetermines the location of variable, where it is declared. Variables declared with auto storage classes are declared inside main memory whereas variables declared with keyword register are stored inside the CPU Register.

2. Scope of variable
   Scope of Variable tells compile about the visibility of Variable in the block. Variable may have Block Scope, Local Scope and External Scope. A scopeis the context within a computer program in which a variable name or other identifier is valid and can be used, or within which a declaration has effect.

3. Default Initial Value of the Variable
    Whenever we declare a Variable in C, garbage value is assigned to the variable. Garbage Value may be considered as initial value of the variable. C Programming have different storage classes which has different initial values such as Global Variable have Initial Value as 0 while the Local auto variable have default initial garbage value.

4. Lifetime of variable 
   Lifetime of the = Time Of variable Declaration - Time of Variable Destruction Suppose we have declared variable inside main function then variable will be destroyed only when the control comes out of the main .i.e end of the program.

Different Storage Classes in C

![storage](_assets/storage-classes.png)

There are four storage classes in C programming.
1. Automatic Storage class.
2. Register Storage class.
3. Static Storage class.
4. External Storage class.

Let's understand Register storage class  in detail with syntax and  code snippets.

Static and External storage class will be discussed in further lesson.


1. **Automatic Storage class**  : To define a variable as automatic storage class, the keyword `auto` is used. By defining a variable as automatic storage class, it is stored in the memory. The default value of the variable will be garbage value. Scope of the variable is within the block where it is defined and the life of the variable is until the control remains within the block.
   
`Syntax : auto data_type variable_name;
          auto int a,b; `

The variables `a and b` are declared as integer type and auto. The keyword `auto` is
not mandatory. Because the default storage class in C is `auto`.

**Example 1:**

```markdown
void main()
{
int detail;
or
auto int detail; //Both are same
}
```
>Note :  A variable declared inside a function without any storage class specification, is by default an automatic variable. Automatic variables can also be called local variables because they are local to a function.

**Example 2:**

```c
void main()
{
auto mum = 20 ;
{
auto num = 60 ;
printf("nNum : %d",num);
}
printf("nNum : %d",num);
}
```

**Output:**

```markdown
Num :60
Num :20
```

>Note: Two variables are declared in different blocks , so they are treated as different variables.


2. **Register Storage class**  : To define a variable as register storage class, the keyword `register` is used. If CPU cannot store the variables in CPU registers, then the variables are assumed as auto and stored in the memory. When a variable is declared as register, it is stored in the CPU registers. The default value of the variable will be garbage value. Scope of the variable within the block where it is defined and the life of the variables is until the control remains within the block.
Register variable has faster access than normal variable. Frequently used variables are kept in register. Only few variables can be placed inside register.

>NOTE : Unary operator [&] is not associated with it. We can't get the address of register variable because value is not stored in RAM instead it is stored in register.

This is generally used for faster access.
Common use is ―Counter―

```markdown
Sytax : register data_type variable_name;
 Ex: register int count;
```
**Example:**

```c
#include<stdio.h>
int main()
{
int num1,num2;
register int sum;
printf("\nEnter the Number 1 : ");
scanf("%d",&num1);
printf("\nEnter the Number 2 : ");
scanf("%d",&num2);
sum = num1 +num2;
printf("\nSum of Numbers : %d",sum);
return(0);
}

```
**Explanation:**

In the above program we have declared two variables `num1,num2`. These two variables are
stored in RAM.
Another variable is declared which is stored in register variable.Register variables are stored in the register of the microprocessor.Thus memory access will be faster than other variables.
If we try to declare more register variables then it can treat variables asAuto storage variablesas memory of microprocessor is fixed and limited.

Why we need Register Variable ?

Whenever we declare any variable inside C Program then memory will be randomly allocated at particular memory location. We have to keep track of that memory location. 

We need to access value at that memory location using ampersand operator/Address Operatori.e (&).

If we store same variable in the register memory then we can access that memory location
directly without using the Address operator.

Register variable will be accessed faster than the normal variable thus increasing the operation and program execution. Generally we use register variable as Counter.

>Note : It is not applicable for arrays, structures or pointers.


Now let us understand `volatile` keyword

**What is volatile keyword in C**

In C, the volatile keyword is a qualifier that can be applied to a variable declaration. When a variable is declared as volatile, it indicates to the compiler that the variable’s value may change at any time without any action being taken by the code the compiler finds nearby. 

The volatile keyword prevents certain compiler optimizations that assume a variable's value remains constant during its scope. 

Why Volatile keyword?

It is useful in scenarios where the variable can be modified externally, such as by hardware, an interrupt service routine, or concurrently running threads.

Key points:

1. Use volatile for variables that can change unexpectedly (e.g., hardware registers).
2. Compiler won’t cache their value in registers.
3. Always read and write volatile variables to ensure correctness.

```markdown
Syntax:
volatile int sensor_value;
```

**Internal Working of volatile keyword**

When a variable is declared as volatile, the compiler generates code that ensures that every access to the variable reads or writes its actual value, rather than using any cached or optimized value. This guarantees that the program behaves as expected, even if the variable’s value changes unexpectedly.

Without the volatile keyword, the compiler may optimize the code by assuming that the value of the variable will not change, and it may reuse the previous value read from the variable instead of reading its current value. This optimization can cause incorrect behavior if the value of the variable changes unexpectedly.

For example, consider a program that reads data from a hardware device and stores it in a variable. Without the volatile keyword, the compiler may assume that the value of the variable will not change during the program’s execution, and it may optimize the code by reading the value of the variable only once. However, the value of the variable may change unexpectedly due to external factors, such as a change in the hardware device’s state. In this case, using the volatile keyword ensures that the program reads the current value of the variable every time it is accessed, rather than using any cached or optimized value.


Look at the example on Volatile keyword that helps in a multi-threaded environment.

Consistency in Multi-threaded Programming : The `volatile` keyword ensures that shared variables are read and written as expected, even if they change unexpectedly due to multiple threads.

```c
#include <stdio.h>

volatile int counter = 0;

void incrementCounter() {
    counter++;
}

int main() {
    // Assume multiple threads call incrementCounter() concurrently
    // ...

    printf("Current counter value: %d\n", counter);
    return 0;
}
```
**Explanation:**

Suppose we have a global variable `counter` that is shared among multiple threads. These threads increment the counter simultaneously. Without any synchronization, the compiler might optimize the code and cache the value of counter, leading to unexpected behavior.
By declaring counter as volatile, we ensure that the compiler always reads the latest value from memory and doesn’t make any assumptions about its stability.

**Conclusion**
Storage classes control variable properties like scope and lifetime, while `volatile` keyword ensures that a variable's value is always read from memory.





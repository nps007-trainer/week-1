# Lesson: Pointers and Memory Address

## Introduction

In C programming, pointers play a crucial role in memory management and efficient data manipulation. Understanding pointers allows us to work directly with memory addresses, which is essential for tasks like dynamic memory allocation, data structures, and low-level system programming.

In this lesson, we will explore C pointers in details, their types, uses, advantages and disadvantages with examples.

## Learning Outcomes

By the end of this lesson, you will be able to:

1. Fundamental of Pointers
2. Define what a pointer is and explain its benefits in C programming.
3. Describe the structure of a pointer in C.
4. Declaration, Initialization and Deferencing of Pointers.
5. Key Points to remember about pointers in C.
6. Understand pointer arithmetic and how it relates to memory manipulation.


## Definition
Pointer is a variable that stores/hold address of another variable of same data type is
also known as locator or indicator that points to an address of a value. A pointer is a
derived data type in C. 

![pointers](_assets/pointer-example1.png)

## About Pointers
- Pointers are variables that are used to store the address of another variable.
- Address of a variable is the memory location number which is alloted to the variable. The memory addresses are 0,1,2,3... and so on up to the capacity of the memory. The address is normally displayed in hexadecimal form we will learn later in our learning journey.
- Pointers unlike other variables do not store values. As stated they store the address of other variables.
- It is already mentioned in the first statement that pointers are also variables. Hence, we can also have a pointer that is pointing to another pointer.
- We will learn about these pointers to pointer in the later lessons. 
  
## Benefits of using pointers
* Pointers are more efficient in handling Array and Structure.
* Pointer allows references to function and hereby helps in passing of function as arguments to other function.
* It reduces length and program execution time.
* It allows C to support dynamic memory management.

- To begin with let us see the syntax of declaring pointers, operators required for pointers and some basic programs.

### Syntax of Declaring Pointer

```c
Data_type *ptr_name;
```
Where "Data_type" is the data type of the variable to which the pointer is supposed to point. If we want a pointer to point to an integer than, we need to have the data type of the pointer as "int", for a float type data pointer should also be of the "float" type and so on.

The "ptr_name" is an identifer ie. the name of the pointer. The same rules of identifiers apply to the pointer name as to any other variable declaration. The most important difference in the declaration of a pointer is the `*` sign given before the pointer name.

Hence, according to the syntax seen above, if we want to declare a pointer for `int` type data then we can declare it as given in the example below :

```c
int *p;
```
Here the pointer name is `p`. Hence, `p` can be used as a pointer to point to any of the variable of type `int`.

**Note: void type pointer works with all data types, but isn't used often.**

### Initialization of Pointer variable
**Pointer Initialization** is the process of assigning address of a variable to pointer variable.
Pointer variable contains address of variable of same data type.

```c
int a=50;       //pointer declaration
int *p;       //pointer initialization
p=&a;

or

int *p=&a;    //initialization and declaration together
```
**Note:** Pointer variable always points to same type of data.

```c
float a;
int *p;
p=&a; //ERROR, type mismatch
```
Above statement defines, p as pointer variable of type int. Here is the visual representation of the pointer:

![pointers](_assets/pointer-example2.png)
As you can see in the above figure, pointer variable stores the address of number variable i.e. fff4. The value of number variable is 50. But the address of pointer variable p is aaa3.

By the help of `* (indirection operator)`, we can print the value of pointer variable p.

### Reference operator (&) and Dereference operator (*)

There are two operators required in the pointer based programs. Address of operator ("&") and Value of operator ("*").

| **Symbol**             | Name   |Description|
| -----------            | ----   | ----|
| & (ampersand sign) | address of operator| determines the address of a variable|
| * (asterik sign) | indirection operator| access the value at the address |

 Let us see the use of these two operators in detail.
1.  Address of operator (&):
- It is also called as the referencing operator.
- This operator returns the address of the variable associated with the operator.
- For example if we write "&x" , it will return the address of the variable "x".
- Hence, if we have a pointer "p", which we want to point to a variable x, then we need to copy the address of the variable "x" in the pointer variable "p". This is implemented by the statement.

```c
p=&x;
```
The address of the variable "x" is copied into the pointer variable "p", hence the pointer "p" pointing to the variable "x".

2. Value of Operator (*) :
- It is also called as de-referencing operator.
- This operator returns the value stored in the variable pointed by the specified pointer.
- For example, if we write "*p", it will return the value of the variable pointed by the pointer "p".
- Hence, if we want the value of the variable pointed by the pointer "p" to be stored in a variable "y", then the expression can be written as :

 ```c
y=*p;
 ``` 
 It means the value of the variable pointed by the pointer "p" is stored in the variable "y".

 Let us understand the use of these operators in some sample programs.

 ```c
 #include<stdio.h>
 #include<conio.h>

 void main(){
    int a, *p;
    a=50;
    p=&a;
    printf("%d\n", a);          // this will print the value of a         
    printf("%x\n", p);          // this will print the address of a
    printf("%d\n", *p);         // this will also print the value of a
    getch();
 }
 ```
 **Output:**
 ```markdown
 50
 fff4
 50
 ```

### Key Points to remember about pointers in C.
- Normal variable stores the value whereas pointer variable stores the address of the variable.
- The content of the C pointer always be a whole number i.e. address.
- Always C pointer is initialized to null, i.e. `int *p=null`.
- The value of null pointer is 0.
- (&) symbol is used to get the address of the variable.
- (*) symbol is used to get the value of the variable that the pointer is pointing to.
- If a pointer in C is assigned to NULL, it means it is pointing to nothing.
- Two pointers can be subtracted to know how many elements are available between these two pointers.
- But, pointer addition, multiplication, division are not allowed.
- The size of any pointer is 2 bytes(for 16 bit compiler).

Example:
```c
 #include<stdio.h>

 void main(){
    int var=10;
    int  *p;
    p=&var;
    printf ( "\n Address of var is: %u", &var);
    printf ( "\n Address of var is: %u", p);
    printf ( "\n Address of pointer p is: %u", &p);
    /* Note I have used %u for p's value as it should be an address*/
    printf( "\n Value of pointer p is: %u", p);
    printf ( "\n Value of var is: %d", var);
    printf ( "\n Value of var is: %d", *p);
    printf ( "\n Value of var is: %d", *( &var));
```
**Output:**
```markdown
Address of var is: 00XBBA77
Address of var is: 00XBBA77
Address of pointer p is: 77221111
Value of pointer p is: 00XBBA77
Value of var is: 10
Value of var is: 10
Value of var is: 10
```

**NULL Pointer**
A pointer that is not assigned any value but NULL is known as NULL pointer. If you don't have
any address to be specified in the pointer at the time of declaration, you can assign NULL value.
Or
It is always a good practice to assign a NULL value to a pointer variable in case you do not have
an exact address to be assigned. This is done at the time of variable declaration. A pointer that is
assigned NULL is called a null pointer.int *p=NULL;
>Note: The NULL pointer is a constant with a value of zero defined in several standard libraries/
in most the libraries, the value of pointer is 0 (zero).

### Pointer Arithmetic
Pointer holds address of a value, so there can be arithmetic operations on the pointer variable.
There are 4 arithmetic operators that can be used on pointers :
* Increment (++)
* Decrement (--)
* Addition (+)
* Subtraction (-)

**Increment Pointer**
1. Incrementing Pointer is generally used in array because we have contiguous memory in array we know the contents of next memory location.
2. Incrementing Pointer Variable depends upon data type of the pointer variable.
   
The formula of incrementing pointer is given below:

`new_address=current_address+i*size_of(data type)`

Three rules should be used to increment pointer

address+1=address
address++=address
++address=address

Let us understand with the help of the diagram given below :

![pointers](_assets/pointer-example3.png)

| **Data Type**             | Older address stored in pointer| Next Address stored in pointer after incrementing(ptr++)|
| -----------            | ----   | ----|
| int | 1000 | 1002|
| float | 1000| 1004 |
| char |1000 | 1001 |

>Note : 32 bit - for 32 bit int variable, it will increment to 2 byte. 64 bit - for 64 bit int variable, it will increment to 4 byte.


### Operation on Pointers
- When a pointer is incremented, it actually increments by the number equal to the size of the data type for which it is a pointer.
- For example, if an integer pointer is incremented, it will increment by 2, while if a float type pointer is incremented, it will increment by 4.
- When a pointer is decremented, it actually decrements by the number equal to the size of the data type for which it is a pointer.
- For example, if an integer pointer is decremented, it will decrement by 2, while if a float type pointer is decremented it will decrement by 4.
- When a pointer is added with a value, the value if first multiplied by the size of data type and then added to the pointer.
- When a pointer is subtracted with a value, the value is first multiplied by the size of data type and then subtracted from the pointer.

Example:
```c
#include<stdio.h>

void main(){
    int a, *a1;
    float b, *b1;
    a1=&a;
    b1=&b;
    printf("%x\n%x\n",a1,b1);
    a1++;
    b1++;
    printf("%x\n%x\n",a1,b1);
}
```
**Output:**
```markdown
Address of variable a
Address of variable b
(Address of variable a)+2
(Address of variable b)+4
```
Explanation :
Initially; the addresses of "a" and "b" are displayed as those are the contents of the pointers. Thereafter; when the pointers are incremented they increment by 2 and 4 respectively for "a" and "b". Hence, the new values that are displayed are addition of 2 and 4 respectively with respect to their previous values.

**Decrement Pointer**
Like increment, we can decrement a pointer variable. The formula of decrementing pointer is given below:

`new_address=current_address-i*size_of(data type)`

Example :
```c
#include <stdio.h>
void main(){
int number=50;
int *p;         //pointer to int
p=&number;      //stores the address of number variable
printf("Address of p variable is %u \n",p);
p=p-1;
printf("After decrement: Address of p variable is %u \n",p);
}
```
**Output:**

```markdown
Address of p variable is 3214864300
After decrement: Address of p variable is 3214864296 
```

**Addition**
We can add a value to the pointer variable. The formula of adding value to pointer is given below:

`new_address=current_address + (number * size_of(datatype))`

>Note : 32 bit - for 32 bit int variable, it will add 2 * number. 64 bit - for 64 bit int variable, it will add 4 * number.

Example :
```c
#include <stdio.h>
void main(){
int number=50;
int *p;         //pointer to int
p=&number;      //stores the address of number variable
printf("Address of p variable is %u \n",p);
p=p+3; //adding 3 to pointer variable
printf("After adding 3: Address of p variable is %u \n",p);
}
```
**Output:**
```markdown
Address of p variable is 3214864300
After adding 3: Address of p variable is 3214864312
```

**Subtraction**
Like pointer addition, we can subtract a value from the pointer variable. The formula of subtracting value from  pointer variable  is given below:

`new_address=current_address - (number * size_of(datatype))`

Example :

```c
#include <stdio.h>
void main(){
int number=50;
int *p;             //pointer to int
p=&number;          //stores the address of number variable
printf("Address of p variable is %u \n",p);
p=p-3;              //subtracting 3 from pointer variable
printf("After subtracting 3: Address of p variable is %u \n",p);
}
```

**Output:**

```markdown
Address of p variable is 3214864300
After subtracting 3: Address of p variable is 3214864288
```
## Conclusion

* Pointers are variables that store memory addresses.
* They allow direct memory access and dynamic memory allocation.
* Remember to initialize pointers and use dereferencing (*ptr) to access values.
* Handle pointers carefully to avoid memory-related issues.

# Activity: Pointers to Void

## Introduction

A void pointer also known as a generic pointer is a special type of pointer that can point to any data type's objects, whether built-in or user-defined. Unlike other pointers that have a specific data type(example an int pointer points to an int), a void pointer doesn't have a concrete type. It acts as a placeholder accepting any other pointer. 
Let us see the code snippet of declaring a void pointer in C.

```c
void *ptr;      //ptr is a void pointer
```
A void pointer can hold an address of any type and can be typecasted to any type.

>Note: Suppose we have to declare integer pointer, character pointer and float pointer then we need to declare 3 pointer variables.Instead of declaring different types of pointer variable it is feasible to declare single pointer variable which can act as integer pointer,character pointer.

A pointer variable declared using a particular data type can not hold the location address of
variables of other data types. It is invalid and will result in a compilation error.

Example :
```c
char *ptr;
int var1;
ptr=&var1;   // This is invalid because "ptr" is a character pointer variable.
```
**Here comes the importance of a “void pointer”.** A void pointer is nothing but a pointer variable declared using the reserved word in C "void".

**Void Pointer Basics:**
* In C General Purpose Pointer is called as void Pointer
* It does not have any data type associated with it
* It can store address of any type of variable
* A void pointer is a C convention for a raw address.
* The compiler has no idea what type of object a void Pointer really points to ?

**Void Pointer Example**

```c
void *ptr;          //ptr is declared as void pointer
char cnum;
int inum;
float fnum;

ptr = &cnum; // ptr has address of character data
ptr = &inum; // ptr has address of integer data
ptr = &fnum; // ptr has address of float data
```

**Example : void pointers in C are used to implement generic functions in C.** 

> Note : void pointers cannot be dereferenced. For example the following program doesn‟t compile.

```c
#include<stdio.h>
int main()
{
int a = 10;
void *ptr = &a;
printf("%d", *ptr);
return 0;
}
```

**Output:**
```markdown
Compiler Error: 'void*' is not a pointer-to-object type 
```

**The following program compiles and runs fine.**

```c
#include<stdio.h>
int main()
{
int a = 10;
void *ptr = &a;
printf("%d", *(int *)ptr);
return 0;
}
```
**Output:**
```markdown
10
```
**Conclusion**

|Scenario|Behaviour|
|---|---|
|When We assign address of integer variable to void pointer | Void Pointer Becomes Integer Pointer|
|When We assign address of character variable to void pointer |Void Pointer Becomes Character Pointer |
|When We assign address of floating variable to void pointer | Void Pointer Becomes Floating Pointer |

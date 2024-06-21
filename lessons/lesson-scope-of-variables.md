# Lesson: Scope of variables and static/extern keywords

## Introduction
In our previous lesson we  explored the concepts of register storage, the volatile keyword, and variable scope in C programming. These features play a crucial role in optimizing code and managing variable lifetimes. In this lesson we will explore other storage classes and the scope of variables.

**In C, variables can have different scopes :**

* Block or Function Scope : Variables declared inside a function or a block (within curly braces) have block scope. They are accessible only within that block.
* File Scope : Variables declared outside any function (at the top level of a file) have file scope. They are visible from their declaration point until the end of the translation unit (i.e., the entire file).


##Definition

**External Storage class**: When a variable is declared as extern, it is stored in the memory. The default value is initialized to zero. The scope of the variable is global and the life of the variable is until the program execution comes to an end. To define a variable as external storage class, the keyword `extern` is used. An extern variable is also called as a global variable. Global variables remain available throughout the entire program and can also be accessed across files.

One important thing to remember about global variable is that their values can be changed by any function in the program.



`Syntax : extern data_type variable_name;
          extern int a; `


**Code snippet:**

```markdown
extern int globalVar; // Accessible from other files
```

**Example :**

```c
int num = 75 ;
void display();
void main()
{
extern int num ;
printf("nNum : %d",num);
display();
}
void display()
{
extern int num ;
printf("nNum : %d",num);
}
```
**Output:**

```markdown
Num :75
Num :75
```

>Note: Declaration within the function indicates that the function uses external variable. Functions belonging to same source code , does not require declaration (no need to write extern) If variable is defined outside the source code , then declaration using extern keyword is required. Let's Understand with the help of diagram given below:

![storage](_assets/extern.png)

2. **Static Storage class**: The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls.

The static modifier may also be applied to global variables. When this is done, it causes that variable's scope to be restricted to the `file` in which it is declared.

In C programming, when static is used on a class data member, it causes only one copy of that member to be shared by all the objects of its class.

`Syntax : static data_type variable_name;
          static int a; `

**Code snippet:**

```markdown
static int counter =0;  // Visible only in this file
```

**Example :**

```c
#include <stdio.h>

/* declaring a function */
void func(void);

static int count = 5; /* global variable */

int main() {
while(count--) {
func();
}
return 0;
}

/* function definition */
void func( void ) {
static int i = 5;  /* local static variable */
i++;
printf("i is %d and count is %d\n", i, count);
}

```

**Output:**

```markdown
i is 6 and count is 4
i is 7 and count is 3
i is 8 and count is 2
i is 9 and count is 1
i is 10 and count is0
```

**Conclusion** 

`Static` limits visibility to the current file, while `extern` allows sharing variables across files
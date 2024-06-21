# Lesson: Understand Preprocessor directives and conditional compilation

## Introduction
In this lesson, we will briefly describe and highlight the key features of C preprocessor directives and conditional compilation for managing code behaviour at compile time. First let's have a look at the diagram below for more information on Process of Compiling and Running C program which have been covered in our previous lessons.

![compiling](_assets/compiling.png)

**The C Compilation Model**
*The Preprocessor*
The preprocessor accepts source code as input and is responsible for
    * removing comments
    * Interpreting special *preprocessor directives* denoted by **#**.

For Example as already implemented in our examples including header files

```markdown
#include <math.h> -- standard library mathsfile.
#include <stdio.h> -- standard library I/Ofile

```
Before a C program is compiled in a compiler, source code is processed by a program called preprocessor. This process is called preprocessing. 

Key directives such as `#define`,` #ifdef`, `#ifndef`, `#if`, `#else`, `#elif`, and `#endif` enable us to conditionally include or exclude sections of code, define macros for simplifying complex expressions, and adapt code for different environments or requirements.

Let's explore the lesson in detail , also understand the learning outcomes of learning this lesson.

## Learning Outcomes
By the end of this lesson, you will:
1. Understand the Purpose and Usage of preprocessor directives (#define, #ifdef, #ifndef, #if, #else, #elif, #endif) in C programming.
2. Conditional Compilation Techniques: Learn how to selectively compile code based on predefined conditions or macros.
3. Macro Definition: Acquire skills in defining and using macros to streamline repetitive tasks and enhance code readability.
4. Practical Scenarios: Gain practical experience through examples that demonstrate the effective use of preprocessor directives and conditional compilation in real-world applications.
5. Enhance Code Efficiency and Flexibility: Learn techniques to optimize code performance and adaptability by leveraging conditional compilation.

## Definition
The C Preprocessor is not a part of the compiler, but it is a separate step in the compilation process. In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation. All preprocesso commands begin with a hash symbol *(#)*. 

A program in C language involves into different processes. Below diagram will help you to understand all the processes that a C program comes across.

![compiling](_assets/compilingsteps.png)

Below is the list of preprocessor directives that C language offers.

|**Preprocessor**|**Syntax**|**Description**|
|--|--|--|
|**Macro**|#define|This macro defines constant value and can be any of the basic data types. |
|**Header file inclusion**|#include file_name| The source code of the file ―file_name is included in the main program at the specified place|
|**Conditional Compilation**|#ifdef, #endif, #if, #else,#ifndef| Set of commands are included or excluded in source program before compilation with respect to the condition|
|**Other directives**| #undef, #pragma |#undef is used to undefine a defined macro variable. #Pragma is used to call a function before and after main() in a C program.|

Let's understand the `#include` and `#define` directive with example

**#include**

The `#include` preprocessor directive is used to paste code of given file into current file. It is used to include system-defined and user-defined header files. If included file is not found, compiler renders error.

By the use of `#include` directive, we provide information to the preprocessor where to look for the header files. There are two variants to use `#include` directive.

```markdown
1. #include <filename>
2. #include "filename"
```

The `#include <filename>` tells the compiler to look for the directory where system header files are held. In UNIX, it is `\usr\include` directory.

The `#include "filename"` tells the compiler to look in the current directory from where program is running.

**Example :**

```c
// include math.h to use  ceil function. 
#include <math.h> 
#include <stdio.h> 

int main() 
{ 
	float val1, val2, val3, val4; 

	val1 = 1.6; 
	val2 = 1.2; 
	val3 = -2.8; 
	val4 = -2.3; 

	printf("value1 = %.1lf\n", ceil(val1)); 
	printf("value2 = %.1lf\n", ceil(val2)); 
	printf("value3 = %.1lf\n", ceil(val3)); 
	printf("value4 = %.1lf\n", ceil(val4)); 

	return (0); 
}

```

**Output:**

```markdown
value1 = 2.0
value2 = 2.0
value3 = -2.0
value4 = -2.0
```
**Explanation** 
In this example we have included math.h header that defines various C mathematical functions. All the functions available in this library take double as an argument and return double as the result. We are calling ceil(double x) that returns the smallest integer value greater than or equal to x.

**#define**

The `#define` preprocessor directive is used to define constant value or micro substitution. It can use any basic data type.

```markdown
Syntax:
#define token value
```
**Example:**

```c
#include <stdio.h>
#define height 100
#define PI 3.14
#define letter 'A'
#define letter_sequence "ABC"
#define backslash_char '\?'
void main()
{
printf("value of height : %d \n", height );
printf("value of PI : %f \n", PI );
printf("value of letter : %c \n", letter );
printf("value of letter_sequence : %s \n", letter_sequence);
printf("value of backslash_char : %c \n", backslash_char);
}
```
**Output:**

```markdown
value of height : 100
value of PI : 3.140000
value of letter : A
value of letter_sequence : ABC
value of backslash_char : ?
```
**C Macros**
A macro is a segment of code which is replaced by the value of macro. Macro is defined by #define directive. There are two types of macros:
1. Object-like Macros
2. Function-like Macros
   
**Object-like Macros**

The object-like macro is an identifier that is replaced by value. It is widely used to represent numeric constants. For example:

`#define PI 3.14`

Here, PI is the macro name which will be replaced by the value 3.14.

**Function-like Macros**

The function-like macro looks like function call. For example:

`#define MIN(a,b) ((a)<(b)?(a):(b))`

Here, `MIN` is the macro name.

**Example: use #define to create a macro**

```c
#include <stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))

void main() {
printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));
}
```
**Output:**

```markdown
Minimum between 10 and 20 is: 10
```

**Explanation:**
In this example a macro is defined with name MIN() that takes two arguments implemeting ternary operator to return the minimum number of two numbers.

**Predefined Macros**

There are some predefined macros which are readily for use in C programming.

|Macro|Definition|
|--|--|
|_DATE_|represents current date in "MMM DD YYYY" format.|
|_TIME_|represents current time in "HH:MM:SS" format.|
|_FILE|represents current file name.|
|_LINE_|represents current line number.

**Example:**

```c
#include <stdio.h>
main() {
 printf("File :%s\n", __FILE__ );
 printf("Date :%s\n", __DATE__ );
 printf("Time :%s\n", __TIME__ );
 printf("Line :%d\n", __LINE__ );

}

```

**Output:**

```markdown
File :test.c
Date :Jun 20 2024
Time :03:36:24
Line :8
```
**#if**

The `#if` preprocessor directive evaluates the expression or condition. If condition is true, it executes the code otherwise `#elseif` or `#els`e or `#endif` code is executed.

Look at the syntax of `#if`, `#else`, and `#endif` for more information.

```markdown
#if expression
//code
#endif

#if expression
//if code
#else
//else code
#endif

#if expression
//if code
#elif expression
//elif code
#else
//else code
#endif
```
**Example: #if directive**

```c
#include <stdio.h>
#include <conio.h>
#define NUMBER 1
void main() {
clrscr();
#if (NUMBER==0)
printf("1- Value of Number is: %d",NUMBER);
#endif
#if (NUMBER==1)
printf("2-  Value of Number is: %d",NUMBER);
#endif
getch();
}
```

**Output:**

```markdown
2 Value of Number is: 1
```

**#else**
The `#else` preprocessor directive evaluates the expression or condition if condition of `#if` is false.

It can be used with `#if`, `#elif`, `#ifdef` and `#ifndef` directives.

`#ifdef` directive checks whether particular macro is defined or not. If it is defined If clause statements are included in source file.
Otherwise, else clause statements are included in source filefor compilation and execution.

**Example:**

```c
#include <stdio.h>
#define AGE 20
int main()
{
#ifdef AGE
printf("AGE is defined. So, this can be validated for eligibility\n");
#else
printf("AGE is not defined\n");
#endif
return 0;
}
```
**Output:**

```markdown
AGE is defined. So, this can be validated for eligibility
```

`#ifndef` is exactly opposite of `#ifdef` directive. If particular macro is not defined, If clause statements are included in source file. Otherwise, else clause statements are included in source file for compilation and execution.



**Conclusion**
 Preprocessor directives and Conditional compilation empowers us to write more adaptable, efficient, and maintainable code. These directives serve as essential tools for tailoring code execution based on specific conditions or requirements, thereby enhancing program functionality and flexibility. By understanding how to use #define for macro definitions, #ifdef and #ifndef for conditional inclusion, and #if, #else, #elif, and #endif for complex conditional logic, we can optimize our codebase and adapt it to diverse environments seamlessly.



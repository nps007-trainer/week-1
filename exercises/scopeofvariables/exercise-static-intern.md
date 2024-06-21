# Exercise: Let’s create a program that demonstrates the usage of static and extern keywords in C. We will split the code into two source files: externmain.c and counter.c.

**Length as Designed:** 30 minutes

## Introduction

In this exercise, we will explore how to share variables and functions between multiple source files using the `static` and `extern` keywords. Specifically, we'll create a global variable called `count` in `main.c`, initialize it to 0, and then increment its value using a function defined in `counter.c`.

The `extern` keyword in C extends the visibility of variables and functions across multiple source files. 
### Starter Files

open a blank editor

### Requirements
1. Create Two Source Files:
    * `externmain.c` : This file will contain the `main()` function
    * `counter.c` : This file will define the `increment_count()` function  
2. Global variable
    * In `externmain.c`, declare a global variable named `count` and initialize it to 0.
    * Use the `static` keyword to make `count` accessible only within `externmain.c`.
3. Function Definition :
    * In `counter.c`, define a function called `increment_count()`
    * This function should increment the value of `count` by 1
4. Function Declaration:
    * In `externmain.c`, declare the `increment_count()` function using the `extern` keyword.
5. Output :
    * Display the initial value of `count` and the updated value after calling `increment_cout()`.


**Sample Output**
```markdown
Initial value of count: 0
After incrementing count: 1
```

**Conclusion**
This exercise will help you understand use of storage classes `extern` and `static` keywords to share variables and functions between files.

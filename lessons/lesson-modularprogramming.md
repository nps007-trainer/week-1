# Lesson: Modular programming and Separating Code into Files

## Introduction
Modular programming is a fundamental approach in software development that involves breaking down a program into smaller, manageable modules or units. Each module focuses on a specific task or functionality, promoting code reusability, maintainability, and collaboration among developers. Separating code into source (.c) and header (.h) files allows for better organization and encapsulation of functionalities.

 By dividing a program into modules, we can work on different parts independently. Separating code into multiple files involves dividing code into header files (`*.h`) for declarations and source files (`*.c`) for implementations. This approach allows functions and variables to be declared in one file and used in other files by including the necessary headers.

## Learning Outcomes
By the end of this lesson, you will be able to:

* Understand the benefits of modular programming in C.
* Undertstand the importance of separating code into header files and source files.
* Enhance and maintain the code.

Let's understand this mechanism of modular programming and separating code into files with an example.

`functions.h` Header file

```c
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Function declarations
void display();
int add(int a, int b);

#endif // FUNCTIONS_H

```

`functions.c` Source file

```c
#include <stdio.h>
#include "functions.h"

// Function definitions
void display() {
    printf("Hello, Modular Programming\n");
}

int add(int a, int b) {
    return a + b;
}

```

`main.c` Source file

```c
#include <stdio.h>
#include "functions.h"

int main() {
    display(); // Calling function from functions.c
    int result = add(5, 3); // Calling function from functions.c
    printf("Sum: %d\n", result);
    return 0;
}
```

**Conclusion**
Modular programming and separating code into files are fundamental practices that promote code organization, reusability, and maintainability in C programming. By using header files for function declarations and source files for function definitions, we can efficiently manage and scale projects. Understanding these concepts empowers us to write cleaner, more manageable code.




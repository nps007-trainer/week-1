# Activity: Use preprocessor directives to create macros and conditionally compile code based on defined symbols 

## Introduction

In this activity we will implement #if and #else directives along with a macro for the mathematical constant PI. These directives will conditionally define the value of PI based on a compile-time switch, we will understand how conditional compilation can be used to check the behavior of the program.

```c
#include <stdio.h>

// Switch to choose the value of PI at compile time
#define USE_APPROX_PI  //comment this line to use more accurate PI

// Conditional compilation based on the switch
#ifdef USE_APPROX_PI
    #define PI 3.142   // Approximate value of PI
#else
    #define PI 3.14159 // More accurate value of PI
#endif

int main() {
    int r;
    float area;

    //  enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    // Validate the radius input
    if (r <= 0) {
        printf("Invalid radius. Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the area of the circle using the macro PI
    area = PI * r * r;

    // Display the calculated area of the circle
    printf("The area of the circle with radius %d is: %.2f\n", r, area);

    return 0;
}

```

**Output 1:  Using Approximate PI**

```markdown
Enter the radius of the circle: 5
The area of the circle with radius 5 is: 78.55
```

**Output 2:  Using Accurate PI**

```markdown
Enter the radius of the circle: 5
The area of the circle with radius 5 is: 78.55
```
To use the more accurate value of PI (`PI = 3.14159`), comment out or remove the `#define USE_APPROX_PI` line at the beginning of the code and recompile.

```markdown
Enter the radius of the circle: 5
The area of the circle with radius 5 is: 78.54
```

**Conclusion**
In this activity, we implemented  `#if, #else, and #ifdef` directives for conditional compilation in C programming. By defining a compile-time switch (`USE_APPROX_PI`), we can choose between using an approximate value or a more accurate value of PI in the area calculation formula. This approach allows us to customize program behavior based on specific requirements or preferences, enhancing code flexibility and maintainability. 

Understanding how to effectively use conditional compilation directives alongside macros is essential for writing efficient and adaptable C programs.



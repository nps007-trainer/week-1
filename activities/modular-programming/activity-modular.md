# Activity: Create a multi-file project; use header files to declare functions and share them between source files 

## Introduction

Let's implement Employee Management across Departments to understand the use of header files to declare functions and share them between source files.

## Requirements

1. `main.c` : The main program that interact with users.
2. `employee.c` : Contains functions related to employee management(adding, searching)
3. `employee.h`  : Header files for functions declaration.

### Task 1

Create `employee.h`

**employee.h**
```c
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// Function declarations for employee management
void addEmployee(int emp_id, const char *name, const char *department);
void searchEmployee(int emp_id);


#endif // EMPLOYEE_H
```
### Task 2

Create `employee.c` source file

**employee.c**
```c
#include <stdio.h>
#include <string.h>
#include "employee.h"

// declaring arrays
int employee_ids[100];          // Array to store employee IDs
char employee_names[100][50];   // Array to store employee names
char employee_departments[100][50]; // Array to store employee departments
int numEmployees = 0;           // Number of employees currently stored

// working with 5 employees initially 
void addEmployee(int emp_id, const char *name, const char *department) {
    if (numEmployees < 5) {
        employee_ids[numEmployees] = emp_id;
        strcpy(employee_names[numEmployees], name);
        strcpy(employee_departments[numEmployees], department);
        printf("Added employee with ID %d\n", emp_id);
        numEmployees++;
    } else {
        printf("Employee database full, better try next time!\n");
    }
}

void searchEmployee(int emp_id) {
    int found = 0;
    for (int i = 0; i < numEmployees; ++i) {
        if (employee_ids[i] == emp_id) {
            printf("Employee found:\n");
            printf("ID: %d\n", employee_ids[i]);
            printf("Name: %s\n", employee_names[i]);
            printf("Department: %s\n", employee_departments[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", emp_id);
    }
}
```

### Task 3

Create `main.c` source file

```c
#include <stdio.h>
#include "employee.h"

int main() {
    // Adding employees
    addEmployee(1, "Richard", "Developer");
    addEmployee(2, "Richardson", "HR");
    
    // Searching for an employee
    searchEmployee(1);
    searchEmployee(3); // Employee not found
    
    return 0;
}
```
**Conclusion**
In this activity we have implemented header files to share function declarations between source files. This concept of modular programming promotes code reusability and DRY(Don't Repeat Yourself).

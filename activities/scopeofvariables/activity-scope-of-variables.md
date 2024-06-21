# Activity: Use `static` and `extern` to control scopes

## Introduction to `static`

In `static` storage class data is stored in memory. The initial value of such a variable is zero. The scope of the variable is local i.e. limited to the function in which it is defined. The life of such variable is till the program is alive.

Let's demostrate to initialize a static variable and increment it to a function. Call this function thrice and print the value to the variable every time after incrementing.

```c
#include<stdio.h>
#include<conio.h>

void incr(){
    static int i=0;
    i++;
    printf("%d\n",i);

}

int main(){
    incr();
    incr();
    incr();
    getch();
}
```

**Output:**

```markdown
1
2
3
```
**Explanation:**
In this example the value of `i` is initialized to zero only once i.e for the first time when the function `incr()` is called. This is because, the variable `i` is a static variable. 
Every time the function `incr()` is called, the value of the variable `i` is incremented and displayed on the screen.
Hence the value increments with respect to the previous value.

## Introduction to `extern`

In `extern` storage class data is stored in memory. The initial value of such a variable is zero. The scope of the variable is global i.e. it is accessible from anywhere in the program. The life of such variable is till the program is alive.

Let's demostrate the access of global variable

```c
#include<stdio.h>
#include<conio.h>

int a=5;
void main(){
    int a=10;
    printf("%d\n",a);
    printf("%d\n",::a);
    a=::a+a;
    printf("%d\n",a);
    printf("%d\n",::a);

    ::a=a;

    printf("%d\n",a);
    printf("%d\n",::a);

    getch();

}
```

**Output:**

```markdown
10
5
15
5
15
15
```

**Explanation:**

The global variable as seen is accessed with the help of scope resolution operator `::`. Although the name of the global and local variable is same i.e 'a', we can access them separately. Whenever the scope resolution operator is associated with the variable 'a', it indicates that the global variable is to be accessed; else the local variable is considered.


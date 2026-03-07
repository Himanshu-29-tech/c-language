//What are Storage Classes?

// Storage classes tell the compiler:

// Scope – where the variable can be used

// Lifetime – how long the variable exists

// Storage location – where it is stored in memory

/*Types of Storage Classes in C

There are 4 main storage classes:

1---->>auto

2----->>register

3----->>static

4----->>extern
*/


// auto Storage Class

// auto is the default storage class for local variables.

// Example

#include<stdio.h>

main()
{
    auto int a = 10;
    printf("%d", a);
}

// Characteristics

// Scope: Inside function

// Lifetime: Till function execution

// Default value: Garbage value

// Stored in: RAM (stack)


// register Storage Class

// register tells the compiler to store the variable in a CPU register for faster access.

// Example
#include<stdio.h>

main()
{
    register int a = 5;
    printf("%d", a);
}

// Characteristics

// Scope: Inside function

// Lifetime: Till function execution

// Default value: Garbage value

// Stored in: CPU register

// Cannot use & (address operator)



// static Storage Class

// static variables keep their value between function calls.

// Example
#include<stdio.h>

void fun()
{
    static int a = 0;
    a++;
    printf("%d\n", a);
}

main()
{
    fun();
    fun();
    fun();
}

// Characteristics

// Scope: Inside function

// Lifetime: Entire program

// Default value: 0

// Stored in: Data segment

// extern Storage Class

// extern is used to declare a global variable that can be used in other files or functions.

// Example

#include<stdio.h>

int a = 20;

main()
{
    extern int a;
    printf("%d", a);
}

// Characteristics

// Scope: Global

// Lifetime: Entire program

// Default value: 0

// Used for sharing variables between files



//summary

/*
Storage Classes in C

| Storage Class | Scope  | Lifetime           | Default Value | Location     |
|---------------|--------|--------------------|---------------|--------------|
| auto          | Local  | Function execution | Garbage       | Stack        |
| register      | Local  | Function execution | Garbage       | CPU register |
| static        | Local  | Entire program     | 0             | Data segment |
| extern        | Global | Entire program     | 0             | Data segment |

*/
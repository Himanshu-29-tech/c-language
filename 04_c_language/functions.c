/*
====================================================================
            FUNCTIONS IN C 
====================================================================
*/

#include <stdio.h>
#include <math.h>

/* ================================================================
   📌 WHAT IS A FUNCTION?

   A function is a self-contained block of code that performs
   a specific task.

   It helps in:
   - Reducing complexity
   - Improving readability
   - Code reusability
   - Easy debugging

   General Structure:

       return_type function_name(parameters)
       {
           // body
       }
================================================================ */

/* ================================================================
   📌 FUNCTION PROTOTYPE (DECLARATION)

   A function prototype tells the compiler:
   - Function name
   - Return type
   - Parameter types

   Syntax:
       return_type function_name(datatype, datatype);
================================================================ */

int add(int, int);              // Prototype for user-defined function
void callByValue(int);          // Prototype for Call by Value
void callByReference(int *);    // Prototype for Call by Reference


int main()
{
    printf("========== FUNCTIONS IN C ==========\n");

    /* ============================================================
       📌 LIBRARY FUNCTIONS

       Library functions are predefined functions available in
       header files.

       Examples:
       <stdio.h>  → printf()
       <math.h>   → sqrt()

       They save time and are already tested.
    ============================================================ */

    printf("\n--- Library Function Example ---\n");
    printf("Square root of 36 using sqrt() = %.2f\n", sqrt(36));


    /* ============================================================
       📌 USER-DEFINED FUNCTION

       These functions are created by the programmer.

       Example below:
       add() function adds two numbers.
    ============================================================ */

    int a = 10, b = 20;
    int result;

    result = add(a, b);   // Function Call

    printf("\n--- User-defined Function Example ---\n");
    printf("Addition of %d and %d = %d\n", a, b, result);


    /* ============================================================
       📌 CALL BY VALUE

       Definition:
       In Call by Value, a copy of the actual argument is passed.
       Changes inside the function DO NOT affect original variable.
    ============================================================ */

    int number = 50;

    printf("\n--- Call by Value Example ---\n");
    printf("Before function call: %d\n", number);

    callByValue(number);   // Copy passed

    printf("After function call: %d\n", number);


    /* ============================================================
       📌 CALL BY REFERENCE

       Definition:
       In Call by Reference, the address of the variable is passed.
       Changes inside the function affect the original variable.
       Uses pointers.
    ============================================================ */

    printf("\n--- Call by Reference Example ---\n");
    printf("Before function call: %d\n", number);

    callByReference(&number);  // Address passed

    printf("After function call: %d\n", number);


    /* ============================================================
       📌 DIFFERENCE SUMMARY

       Call by Value:
       - Copy passed
       - No change in original variable

       Call by Reference:
       - Address passed
       - Original variable modified
    ============================================================ */

    printf("\nProgram executed successfully.\n");

    return 0;
}


/* ================================================================
   📌 FUNCTION DEFINITION – add()

   This function takes two integers as parameters
   and returns their sum.
================================================================ */

int add(int x, int y)
{
    return x + y;
}


/* ================================================================
   📌 FUNCTION DEFINITION – callByValue()

   Receives a copy of variable.
   Modification does not affect original.
================================================================ */

void callByValue(int x)
{
    x = x + 100;
    printf("Inside Call by Value: %d\n", x);
}


/* ================================================================
   📌 FUNCTION DEFINITION – callByReference()

   Receives address of variable using pointer.
   Modification affects original variable.
================================================================ */

void callByReference(int *x)
{
    *x = *x + 100;
    printf("Inside Call by Reference: %d\n", *x);
}
/*
============================================================
        CONTROL STATEMENTS IN C
        Complete Notes + Theory + Example Program
============================================================

CONTROL STATEMENTS:
Control statements are used to alter the normal flow
of execution of a program.

They include:
1. break statement
2. continue statement
3. goto statement
4. return statement

------------------------------------------------------------
BREAK STATEMENT
------------------------------------------------------------
Definition:
The break statement is used to prematurely exit from
a loop or switch statement before it has been fully executed.

Key Points:
- Used inside loops (for, while, do-while) or switch.
- Immediately terminates the loop.
- Control moves to the first statement after the loop.

Syntax:
    break;

------------------------------------------------------------
CONTINUE STATEMENT
------------------------------------------------------------
Definition:
The continue statement skips the remaining code of the
current iteration and passes control to the next iteration
of the loop.

Key Points:
- Used only inside loops.
- Does NOT terminate the loop.
- Skips only the current iteration.

Syntax:
    continue;

------------------------------------------------------------
GOTO STATEMENT
------------------------------------------------------------
Definition:
The goto statement is known as the jump statement in C.
It transfers control to a labeled statement within
the same function.

Key Points:
- Used to break multiple nested loops.
- Label must be defined inside the same function.
- Excessive use reduces readability.

Syntax:
    goto label;

    label:
        statement;

------------------------------------------------------------
RETURN STATEMENT
------------------------------------------------------------
Definition:
The return statement is used to exit from a function
and return control to the calling function.
It may also return a value.

Syntax:
    return;          // for void function
    return value;    // for non-void function

============================================================
                COMPLETE EXAMPLE PROGRAM
============================================================
*/

#include <stdio.h>

/* Function that returns a value */
int increment(int num)
{
    return num + 1;   // returning computed value
}

/* Void function using return */
void displayMessage()
{
    printf("Inside void function.\n");
    return;   // exit function
}

int main()
{
    printf("========== BREAK EXAMPLE ==========\n");

    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;   // loop terminates here
        }
        printf("%d ", i);
    }

    printf("\n\n========== CONTINUE EXAMPLE ==========\n");

    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            continue;   // skip number 5
        }
        printf("%d ", i);
    }

    printf("\n\n========== WHILE + CONTINUE ==========\n");

    int i = 0;

    while(i < 5)
    {
        i++;

        if(i == 3)
        {
            continue;   // skip printing 3
        }

        printf("%d ", i);
    }

    printf("\n\n========== GOTO EXAMPLE ==========\n");

    int x = 0;

start:
    if(x == 3)
        goto end;

    printf("x = %d\n", x);
    x++;
    goto start;

end:
    printf("Exited using goto.\n");

    printf("\n========== RETURN EXAMPLE ==========\n");

    int value = 10;
    int result = increment(value);

    printf("Original value: %d\n", value);
    printf("Returned value: %d\n", result);

    displayMessage();

    printf("\nProgram Finished Successfully.\n");

    return 0;   // return control to OS
}
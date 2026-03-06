/*
========================================================
        RECURSION IN C – COMPLETE GUIDE
        Theory + Definitions + Example Programs
========================================================

--------------------------------------------------------
1. WHAT IS RECURSION?
--------------------------------------------------------

Recursion is a programming technique where a function
calls itself to solve a problem.

Instead of solving the entire problem at once,
the function breaks the problem into smaller
versions of the same problem.

Each recursive function must have:

1. Base Case
   - The condition that stops the recursion.

2. Recursive Case
   - The function calling itself with a smaller input.

General Structure:

    returnType functionName(parameters)
    {
        if(base_condition)
            return value;

        return functionName(smaller_problem);
    }

--------------------------------------------------------
2. HOW RECURSION WORKS
--------------------------------------------------------

When recursion happens, each function call is stored
in the system's CALL STACK.

Example:

factorial(4)

Call Stack:

factorial(4)
factorial(3)
factorial(2)
factorial(1)

Then it returns back:

1 → 2 → 6 → 24

--------------------------------------------------------
3. ADVANTAGES OF RECURSION
--------------------------------------------------------

1. Reduces complexity and length of code.

2. Some problems are easier to solve recursively
   such as:

      • Tree Traversal
      • Graph Algorithms
      • Tower of Hanoi
      • Backtracking Problems

3. Data structures like trees and linked lists
   are naturally recursive.

--------------------------------------------------------
4. DISADVANTAGES OF RECURSION
--------------------------------------------------------

1. Slower than iteration because of function
   call overhead.

2. Uses extra memory due to stack frames.

3. Too many recursive calls can cause
   STACK OVERFLOW.

4. Harder to debug compared to loops.

--------------------------------------------------------
5. BASIC RECURSION EXAMPLE
--------------------------------------------------------
*/

#include <stdio.h>

/*------------------------------------------------------
FACTORIAL USING RECURSION
------------------------------------------------------*/

int factorial(int n)
{
    /* Base Case */
    if(n == 0 || n == 1)
        return 1;

    /* Recursive Case */
    return n * factorial(n - 1);
}

/*------------------------------------------------------
SUM OF NATURAL NUMBERS USING RECURSION
------------------------------------------------------*/

int sum(int n)
{
    if(n == 0)
        return 0;

    return n + sum(n - 1);
}

/*------------------------------------------------------
FIBONACCI SERIES USING RECURSION
------------------------------------------------------

Fibonacci Formula:

F(n) = F(n-1) + F(n-2)

Series:

0 1 1 2 3 5 8 13 ...
------------------------------------------------------*/

int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

/*------------------------------------------------------
PRINT NUMBERS USING RECURSION
------------------------------------------------------*/

void printNumbers(int n)
{
    if(n == 0)
        return;

    printNumbers(n-1);

    printf("%d ", n);
}

/*------------------------------------------------------
TOWER OF HANOI (CLASSIC RECURSION PROBLEM)
------------------------------------------------------

Rules:
1. Only one disk can move at a time
2. Larger disk cannot be placed on smaller disk
3. Use auxiliary rod

------------------------------------------------------*/

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c -> %c\n", source, destination);
        return;
    }

    towerOfHanoi(n-1, source, destination, auxiliary);

    printf("Move disk %d from %c -> %c\n", n, source, destination);

    towerOfHanoi(n-1, auxiliary, source, destination);
}

/*------------------------------------------------------
MAIN FUNCTION
------------------------------------------------------*/

int main()
{
    int n = 5;

    printf("=================================\n");
    printf("FACTORIAL USING RECURSION\n");
    printf("=================================\n");

    printf("Factorial of %d = %d\n", n, factorial(n));

    printf("\n=================================\n");
    printf("SUM OF NATURAL NUMBERS\n");
    printf("=================================\n");

    printf("Sum of %d natural numbers = %d\n", n, sum(n));

    printf("\n=================================\n");
    printf("FIBONACCI SERIES\n");
    printf("=================================\n");

    printf("First %d Fibonacci numbers:\n", n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    printf("\n=================================\n");
    printf("PRINT NUMBERS USING RECURSION\n");
    printf("=================================\n");

    printNumbers(n);

    printf("\n");

    printf("\n=================================\n");
    printf("TOWER OF HANOI (3 DISKS)\n");
    printf("=================================\n");

    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}

/*
========================================================
SUMMARY
========================================================

Recursion = Function calling itself.

Key Components:
• Base Case
• Recursive Case

Pros:
• Cleaner code
• Natural for trees and divide-and-conquer

Cons:
• Higher memory usage
• Slower due to stack calls
• Risk of stack overflow

========================================================
*/
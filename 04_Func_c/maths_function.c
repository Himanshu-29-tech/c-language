/*
====================================================================
            MATH LIBRARY FUNCTIONS IN C – COMPLETE FILE
        (Theory + Definitions + Contextual Examples)
====================================================================

📌 C MATH LIBRARY

The C Standard Library provides a header file <math.h>
which contains built-in mathematical functions.

These functions:
- Perform mathematical calculations
- Work with floating point numbers
- Return double type values (mostly)
- Require linking with -lm in some compilers

To use math functions:
    #include <math.h>

====================================================================
*/

#include <stdio.h>
#include <math.h>

/*
====================================================================
1️⃣ sqrt() FUNCTION
--------------------------------------------------------------------
Definition:
The sqrt() function is used to calculate the square root of a number.

Syntax:
    double sqrt(double number);

Important Points:
- Takes a single number as input
- Returns a double value
- If input is negative, result is NaN
====================================================================
*/

void example_sqrt()
{
    double num = 49.0;

    double result = sqrt(num);

    printf("\n--- sqrt() Function ---\n");
    printf("Square root of %.2lf = %.2lf\n", num, result);
}


/*
====================================================================
2️⃣ pow() FUNCTION
--------------------------------------------------------------------
Definition:
The pow() function is used to calculate power of a number.

Syntax:
    double pow(double base, double exponent);

Returns:
    base raised to the power exponent
====================================================================
*/

void example_pow()
{
    double base = 3;
    double exponent = 4;

    double result = pow(base, exponent);

    printf("\n--- pow() Function ---\n");
    printf("%.2lf raised to %.2lf = %.2lf\n", base, exponent, result);
}


/*
====================================================================
3️⃣ TRIGONOMETRIC FUNCTIONS
--------------------------------------------------------------------
C provides:
    sin()
    cos()
    tan()

Important:
- Angle must be in radians
- Use formula:
        radians = degrees * (PI / 180)

Constant:
    M_PI (may require manual definition if not available)
====================================================================
*/

void example_trigonometric()
{
    double degrees = 45.0;
    double radians = degrees * (M_PI / 180);

    printf("\n--- Trigonometric Functions ---\n");
    printf("sin(45°) = %.6lf\n", sin(radians));
    printf("cos(45°) = %.6lf\n", cos(radians));
    printf("tan(45°) = %.6lf\n", tan(radians));
}


/*
====================================================================
4️⃣ abs() FUNCTION
--------------------------------------------------------------------
Definition:
abs() returns absolute value of an integer.

Syntax:
    int abs(int number);

Removes negative sign.
====================================================================
*/

void example_abs()
{
    int num = -25;
    int result = abs(num);

    printf("\n--- abs() Function ---\n");
    printf("Absolute value of %d = %d\n", num, result);
}


/*
====================================================================
5️⃣ ceil() FUNCTION
--------------------------------------------------------------------
Definition:
ceil() returns the smallest integer
greater than or equal to given number.

Syntax:
    double ceil(double number);
====================================================================
*/

void example_ceil()
{
    double num = 10.45;
    double result = ceil(num);

    printf("\n--- ceil() Function ---\n");
    printf("Ceiling value of %.2lf = %.2lf\n", num, result);
}


/*
====================================================================
6️⃣ floor() FUNCTION
--------------------------------------------------------------------
Definition:
floor() returns the largest integer
less than or equal to given number.

Syntax:
    double floor(double number);
====================================================================
*/

void example_floor()
{
    double num = 3.14;
    double result = floor(num);

    printf("\n--- floor() Function ---\n");
    printf("Floor value of %.2lf = %.2lf\n", num, result);
}


/*
====================================================================
                        MAIN FUNCTION
====================================================================
*/

int main()
{
    printf("========== MATH LIBRARY FUNCTIONS IN C ==========\n");

    example_sqrt();
    example_pow();
    example_trigonometric();
    example_abs();
    example_ceil();
    example_floor();

    printf("\nProgram executed successfully.\n");

    return 0;
}
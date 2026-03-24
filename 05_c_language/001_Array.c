/*
===========================================================
📘 C PROGRAM: MATH FUNCTIONS + ARRAYS (ALL-IN-ONE)
===========================================================

This file combines:
✔ Definitions (Theory)
✔ Syntax
✔ Examples
✔ Programs

Everything is explained INSIDE the code itself.
===========================================================
*/

#include <stdio.h>
#include <math.h>   // Required for math functions

int main() {

    printf("====================================\n");
    printf("   C MATH FUNCTIONS + ARRAYS DEMO\n");
    printf("====================================\n\n");

    /*
    ===========================================================
    🔷 SECTION 1: C MATH LIBRARY FUNCTIONS
    ===========================================================

    THEORY:
    - C provides a built-in library <math.h>
    - It contains functions for mathematical calculations
    - All functions generally return double values

    Examples: sqrt(), cbrt(), pow(), sin(), cos(), etc.
    ===========================================================
    */

    /*
    -----------------------------------------------------------
    ✅ sqrt() FUNCTION
    -----------------------------------------------------------
    DEFINITION:
    - sqrt(x) returns square root of x

    SYNTAX:
        sqrt(number)

    NOTE:
    - Input must be non-negative
    -----------------------------------------------------------
    */

    double num1 = 49.0;
    printf("sqrt(%.2lf) = %.2lf\n\n", num1, sqrt(num1));


    /*
    -----------------------------------------------------------
    ✅ cbrt() FUNCTION
    -----------------------------------------------------------
    DEFINITION:
    - cbrt(x) returns cube root of x
    -----------------------------------------------------------
    */

    double num2 = 27.0;
    printf("cbrt(%.2lf) = %.2lf\n\n", num2, cbrt(num2));


    /*
    -----------------------------------------------------------
    ✅ pow() FUNCTION
    -----------------------------------------------------------
    DEFINITION:
    - pow(x, y) returns x raised to power y

    SYNTAX:
        pow(base, exponent)
    -----------------------------------------------------------
    */

    double base = 2, exp = 3;
    printf("pow(%.2lf, %.2lf) = %.2lf\n\n", base, exp, pow(base, exp));


    /*
    -----------------------------------------------------------
    ✅ TRIGONOMETRIC FUNCTIONS
    -----------------------------------------------------------
    THEORY:
    - Works in radians (NOT degrees)
    - To convert: radians = degrees * (π / 180)

    FUNCTIONS:
    sin(), cos(), tan()
    -----------------------------------------------------------
    */

    double angle_deg = 45.0;
    double angle_rad = angle_deg * M_PI / 180;

    printf("sin(45°) = %.2lf\n", sin(angle_rad));
    printf("cos(45°) = %.2lf\n", cos(angle_rad));
    printf("tan(45°) = %.2lf\n\n", tan(angle_rad));


    /*
    -----------------------------------------------------------
    ✅ abs() FUNCTION
    -----------------------------------------------------------
    DEFINITION:
    - abs(x) returns absolute value (distance from zero)

    NOTE:
    - Works only for integers
    -----------------------------------------------------------
    */

    int val = -10;
    printf("abs(%d) = %d\n\n", val, abs(val));


    /*
    -----------------------------------------------------------
    ✅ ceil() FUNCTION
    -----------------------------------------------------------
    DEFINITION:
    - Returns smallest integer ≥ number
    -----------------------------------------------------------
    */

    double c = 10.45;
    printf("ceil(%.2lf) = %.2lf\n\n", c, ceil(c));


    /*
    -----------------------------------------------------------
    ✅ floor() FUNCTION
    -----------------------------------------------------------
    DEFINITION:
    - Returns largest integer ≤ number
    -----------------------------------------------------------
    */

    double f = 3.14;
    printf("floor(%.2lf) = %.2lf\n\n", f, floor(f));


    /*
    ===========================================================
    🔷 SECTION 2: ARRAYS IN C
    ===========================================================

    THEORY:
    - Array = collection of similar data types
    - Stored in contiguous memory
    - Accessed using index (starting from 0)
    ===========================================================
    */


    /*
    -----------------------------------------------------------
    ✅ ARRAY DECLARATION
    -----------------------------------------------------------
    SYNTAX:
        data_type array_name[size];
    -----------------------------------------------------------
    */

    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array Elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\n");


    /*
    -----------------------------------------------------------
    ✅ ARRAY INITIALIZATION TYPES
    -----------------------------------------------------------
    */

    // 1. With size
    int a1[3] = {1, 2, 3};

    // 2. Without size (auto size)
    int a2[] = {4, 5, 6, 7};

    // 3. Partial initialization (rest = 0)
    int a3[5] = {10};

    printf("a3 values (partial init):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a3[i]);
    }

    printf("\n\n");


    /*
    -----------------------------------------------------------
    ✅ ARRAY INPUT & OUTPUT
    -----------------------------------------------------------
    */

    int userArr[3];

    printf("Enter 3 elements:\n");
    for(int i = 0; i < 3; i++) {
        scanf("%d", &userArr[i]);
    }

    printf("You entered:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", userArr[i]);
    }

    printf("\n\n");


    /*
    ===========================================================
    🔷 SECTION 3: 2D ARRAYS
    ===========================================================

    THEORY:
    - 2D array = array of arrays
    - Represented as matrix (rows × columns)
    ===========================================================
    */


    /*
    -----------------------------------------------------------
    ✅ DECLARATION
    -----------------------------------------------------------
    SYNTAX:
        int arr[row][col];
    -----------------------------------------------------------
    */

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("2D Array (Matrix):\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    /*
    ===========================================================
    🎯 END OF PROGRAM
    ===========================================================
    */

    return 0;
}
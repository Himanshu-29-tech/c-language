/*
====================================================================
                TYPE CONVERSION & TYPE MODIFIERS IN C
        Complete Theory + Definitions + Examples (Single File)
====================================================================

📌 TYPE CONVERSION
Type conversion is the process of converting one data type
into another data type.

In C, there are TWO types of type conversion:

1️⃣ Implicit Conversion (Automatic)
2️⃣ Explicit Conversion (Manual / Type Casting)

====================================================================
1️⃣ IMPLICIT TYPE CONVERSION
====================================================================

Definition:
In implicit conversion, the compiler automatically converts
one data type into another without programmer intervention.

It generally occurs:
- When different data types are used in an expression
- When assigning one type to another

Example:
int a = 10;
float b = a;   // int automatically converted to float

Key Point:
- Smaller data types are converted to larger data types
- No data loss when converting lower → higher type

====================================================================
2️⃣ EXPLICIT TYPE CONVERSION (TYPE CASTING)
====================================================================

Definition:
Explicit conversion is a user-defined conversion where
the programmer manually converts one data type into another
using casting operator.

Syntax:
    (type) expression

Example:
float result = (float)10 / 3;

Key Point:
- Used when we want controlled conversion
- May cause data loss if higher → lower type

====================================================================
TYPE MODIFIERS
====================================================================

Type modifiers are used to modify the size and range
of basic data types.

Types of Modifiers:
1️⃣ short
2️⃣ long
3️⃣ signed
4️⃣ unsigned

--------------------------------------------------------------------
🔹 short
- Reduces memory size
- Typically 2 bytes
- Range: -32768 to 32767

🔹 long
- Increases memory size
- Used for large integer values

🔹 signed
- Stores both positive and negative values
- Default for int and char

🔹 unsigned
- Stores only positive values
- Increases positive range

====================================================================
SIZE OF DATA TYPES (Typical)
====================================================================
char        → 1 byte
int         → 4 bytes
float       → 4 bytes
double      → 8 bytes
long int    → 8 bytes (system dependent)
short int   → 2 bytes

====================================================================
                PROGRAM
====================================================================
*/


//IMPLICIT CONVERSION--->>>


#include <stdio.h>

int main()
{
    printf("========== IMPLICIT CONVERSION ==========\n");

    int intValue = 10;
    float floatValue = intValue;   // automatic conversion

    printf("Integer Value: %d\n", intValue);
    printf("Converted to Float: %.2f\n", floatValue);


    printf("\n========== IMPLICIT (CHAR TO INT) ==========\n");

    char alphabet = 'A';
    int asciiValue = alphabet;   // char to int conversion

    printf("Character: %c\n", alphabet);
    printf("ASCII Value: %d\n", asciiValue);




    //EXPLICIT CONVERSION----->>>



    printf("\n========== EXPLICIT CONVERSION ==========\n");

    int a = 10, b = 3;

    float divisionResult = (float)a / b;   // manual casting

    printf("Without Casting (10/3): %d\n", a/b);
    printf("With Casting (10/3): %.2f\n", divisionResult);





    //TYPE MODIFIERS----->>>>


    printf("\n========== TYPE MODIFIERS ==========\n");

    short shortNum = 100;
    long longNum = 1000000;
    signed int signedNum = -50;
    unsigned int unsignedNum = 50;

    printf("Short Value: %d\n", shortNum);
    printf("Long Value: %ld\n", longNum);
    printf("Signed Value: %d\n", signedNum);
    printf("Unsigned Value: %u\n", unsignedNum);






    //SIZE OF DATA TYPES----->>>>


    printf("\n========== SIZE OF DATA TYPES ==========\n");

    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of long: %lu bytes\n", sizeof(long));

    printf("\nProgram Executed Successfully.\n");

    return 0;
}









//Hotspot and classspot---->>>



//Type conversion 
#include <stdio.h>

int main()
{
    float a = 123.456;
    printf("%f %.3f %f\n", a, a, a);
    printf("%e %.5e %.3e", a, a, a);
    return 0;
}
// %f -->>Default float--->>>123.456000
// %.3f -->>Float with 3 decimals	--->>>123.456
// %e -->>Scientific notation --->>>1.234560e+02
// %.5e -->>Scientific with 5 decimals --->>>1.23456e+02
// %.3e -->>Scientific with 3 decimals --->>>1.235e+02

// Example2

#include <stdio.h>

int main()
{
    char str[12] = "hexadecimal";
    printf("%10s%15s%.5s%.5s", str, str, str, str);
    return 0;
}

//%10s	Right-align string in width 10
// %15s	Right-align string in width 15
// %.5s	Print first 5 characters





//difference between getchar(), getch(), and getche()


#include <stdio.h>

int main()
{
    char a;

    printf("Enter any character: ");
    a = getchar();
    putchar(a);

    a = getch();
    printf("\nYou pressed: %c", a);

    return 0;
}
/* ✔ getchar()
→ character appears only after pressing Enter
✔ getch()
→ key is captured instantly, not displayed
✔ getche()
→ key is captured instantly and displayed

*/


//# ARRAYS

// Syntax->> data_type array_name[size];
#include <stdio.h>
main()
{
    char a[60];
    scanf("%[a-z]",a);// here we can also writr what you want to output [A-Z,a-z] 
    printf("%s",a);
}


// REturn value of scanf()
int result = scanf("%d %f %s", &a, &b, &c);


// Example -->>
#include <stdio.h>

int main()
{
    int a;
    float b;
    char c[10];

    printf("%d", scanf("%d %f %s", &a, &b, c));

    return 0;
}


// store string char by char 

#include <stdio.h>

int main()
{
    char a[10];
    printf("enter 7 characters: ");
    
    int i;
    for (i = 0; i < 7; i++)
    {
        a[i] = getchar(); //getchar() reads one character from keyboard

        //Stores each character into array position
    }

    a[i] = '\0';
    puts(a);

    return 0;
}


#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[10];
    int lower = 0, upper = 0, digit = 0, space = 0, symbol = 0;
    int i;

    printf("Enter 7 characters: ");

    for (i = 0; i < 7; i++)
    {
        a[i] = getchar();
    }

    a[i] = '\0';

    for (i = 0; i < 7; i++)
    {
        if (islower(a[i]))
            lower++;
        else if (isupper(a[i]))
            upper++;
        else if (isdigit(a[i]))
            digit++;
        else if (isspace(a[i]))
            space++;
        else
            symbol++;
    }

    printf("\nLowercase = %d", lower);
    printf("\nUppercase = %d", upper);
    printf("\nDigits = %d", digit);
    printf("\nSpaces = %d", space);
    printf("\nSymbols = %d", symbol);

    return 0;
}



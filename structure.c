
#include<stdio.h>

/*
========================================================
                STRUCTURE IN C
========================================================

Definition:
A structure is a user-defined data type in C
that allows storing different types of data
together under one name.

Example:
- int
- float
- char array

All can be stored inside one structure.

--------------------------------------------------------
Structure Syntax
--------------------------------------------------------

struct structure_name
{
    data_type member1;
    data_type member2;
};

--------------------------------------------------------
Program: Structure Example
--------------------------------------------------------
*/

struct student
{
    int reg;           // stores registration number
    float marks;       // stores marks
    char name[20];     // stores student name
};

/*
--------------------------------------------------------
Main Function
--------------------------------------------------------
*/

int main()
{
    /*
    ----------------------------------------------------
    Array of Structures
    ----------------------------------------------------

    Creates storage for 5 students.

    Each student contains:
    - reg
    - marks
    - name
    */

    struct student s1[5];

    int i;

    /*
    ----------------------------------------------------
    Input
    ----------------------------------------------------
    */

    printf("Enter reg no, marks and name:\n");

    for(i = 0; i < 5; i++)
    {
        /*
        %d  -> integer
        %f  -> float
        %s  -> string

        Dot operator (.)
        is used to access structure members.
        */

        scanf("%d %f %s",
              &s1[i].reg,
              &s1[i].marks,
              s1[i].name);
    }

    /*
    ----------------------------------------------------
    Output
    ----------------------------------------------------
    */

    printf("\nStudent Details:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Reg No: %d\n", s1[i].reg);

        /*
        %.2f prints float value
        with 2 decimal places.
        */

        printf("Marks : %.2f\n", s1[i].marks);

        printf("Name  : %s\n", s1[i].name);

        printf("\n");
    }

    /*
    ----------------------------------------------------
    Important Points About Structure
    ----------------------------------------------------

    1. Stores different data types together
    2. Each member gets separate memory
    3. Uses dot operator (.)
    4. Easy to manage records

    Applications:
    - Student database
    - Employee records
    - Banking systems
    - Library systems
    */

    /*
    ====================================================
                    UNION IN C
    ====================================================

    Definition:
    A union is a user-defined data type where
    all members share the same memory location.

    Only one member can hold a valid value
    at a time.

    ----------------------------------------------------
    Union Syntax
    ----------------------------------------------------

    union union_name
    {
        data_type member1;
        data_type member2;
    };

    ----------------------------------------------------
    Important Difference:
    ----------------------------------------------------

    Structure:
    - Separate memory for each member

    Union:
    - Shared memory for all members
    */

    union result
    {
        int reg;
        float marks;
        float eng;
    };

    union result u1;

    /*
    Both members share same memory.
    Updating one member affects others.
    */

    u1.reg = 4;

    u1.marks = 34;

    printf("%d %f\n", u1.reg, u1.marks);

    /*
    ----------------------------------------------------
    Important Points About Union
    ----------------------------------------------------

    1. Saves memory
    2. All members share same memory
    3. Only one value valid at a time
    4. Used in embedded systems

    Memory Usage:

    Structure:
    Memory = sum of all members

    Union:
    Memory = size of largest member only
    */

    /*
    ====================================================
            POINTER IN STRUCTURE
    ====================================================

    Definition:
    A structure pointer stores the address
    of a structure variable.
    */

    struct student s2;

    /*
    Pointer Declaration

    *p   -> pointer variable
    &s2  -> address of structure variable
    */

    struct student *p = &s2;

    printf("Enter values for reg and marks:\n");

    /*
    ----------------------------------------------------
    Arrow Operator (->)
    ----------------------------------------------------

    Used to access structure members
    through pointer.

    Example:
    p->reg

    Equivalent to:
    (*p).reg
    */

    scanf("%d %f",
          &p->reg,
          &p->marks);

    printf("Entered values are:\n");

    printf("%d %.2f\n",
           p->reg,
           p->marks);

    /*
    ----------------------------------------------------
    Dot Operator vs Arrow Operator
    ----------------------------------------------------

    .   -> used with structure variable

    ->  -> used with structure pointer
    */

    /*
    ----------------------------------------------------
    Important Points About Structure Pointer
    ----------------------------------------------------

    1. Stores address of structure variable
    2. Uses arrow operator (->)
    3. Faster access
    4. Useful in functions
    5. Useful in dynamic memory allocation
    */

    /*
    ====================================================
                    FINAL SUMMARY
    ====================================================

    STRUCTURE
    ----------
    - Stores different data types together
    - Separate memory for members
    - Uses dot operator (.)

    UNION
    -----
    - Shared memory
    - Saves memory
    - One value at a time

    STRUCTURE POINTER
    -----------------
    - Stores address of structure
    - Uses arrow operator (->)

    ====================================================
    */

    return 0;
}

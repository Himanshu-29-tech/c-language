/*
=====================================================================
        DESIGNING STRUCTURED PROGRAMS IN C
        Complete Theory + Notes + All I/O Examples
=====================================================================

📌 STRUCTURED PROGRAMMING
Structured programming is a programming technique in which
a large program is divided into smaller subprograms (functions)
to make it easy to understand, implement, and reuse.

Advantages:
- Improves readability
- Encourages code reusability
- Reduces complexity
- Makes debugging easier
- Improves program quality

In C, structured programming is achieved using FUNCTIONS.

=====================================================================
📌 FUNCTIONS
A function is a self-contained block of code that performs
a specific task.

Types of Functions:
1️⃣ Library Functions
2️⃣ User-defined Functions

=====================================================================
📌 LIBRARY FUNCTIONS
Library functions are predefined functions stored in header files.
They can be used by including appropriate header files.

Examples:
<stdio.h>   → printf(), scanf(), getchar(), putchar()
<string.h>  → strcpy(), strlen()
<math.h>    → sqrt(), pow()
<ctype.h>   → isalpha(), toupper()
<time.h>    → time(), localtime()

Advantages:
- Saves time
- Reduces bugs
- Increases productivity
- Improves readability

=====================================================================
📌 FORMATTED I/O FUNCTIONS
These functions allow input/output in user-defined format.
They use FORMAT SPECIFIERS.

Examples:
printf()
scanf()
sprintf()
sscanf()

Common Format Specifiers:
%d  → int
%f  → float
%lf → double
%c  → char
%s  → string
%u  → unsigned int
%ld → long int
%x  → hexadecimal
%o  → octal

---------------------------------------------------------------------
printf()
- Used to display formatted output on screen.
- Output goes to standard output (stdout).

Syntax:
    printf("format_specifier", variables);

---------------------------------------------------------------------
scanf()
- Used to take formatted input from user.
- Requires address operator (&).

Syntax:
    scanf("format_specifier", &variable);

---------------------------------------------------------------------
sprintf()
- Stores formatted output into a string instead of printing.

Syntax:
    sprintf(string_name, "format", variables);

---------------------------------------------------------------------
sscanf()
- Reads formatted input from a string.

Syntax:
    sscanf(string_name, "format", &variables);

=====================================================================
📌 UNFORMATTED I/O FUNCTIONS
These functions do not use format specifiers.
Mainly used for character and string input/output.

Examples:
getchar()
putchar()
gets()
puts()
getch()
getche()
putch()

---------------------------------------------------------------------
getchar()
- Reads a single character from keyboard.

putchar()
- Prints a single character to screen.

gets()
- Reads a string (unsafe in modern C, used for learning).

puts()
- Prints a string.

getch()
- Reads character without displaying it (conio.h)

getche()
- Reads character and displays it immediately.

putch()
- Prints a single character (conio.h)

=====================================================================
📌 FORMATTED vs UNFORMATTED I/O

Formatted I/O:
- Uses format specifiers
- Supports all data types
- User friendly output formatting
- Example: printf(), scanf()

Unformatted I/O:
- No format specifiers
- Mostly for char/string
- Simple input/output
- Example: getchar(), gets()

=====================================================================
                COMPLETE COMBINED PROGRAM
=====================================================================
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>   // For getch(), getche(), putch()

/* User-defined function */
void greet()
{
    printf("\nWelcome to Structured Programming Demo!\n");
}

int main()
{
    greet();

    printf("\n========== FORMATTED I/O ==========\n");

    int age;
    float marks;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("\n--- Using printf() ---\n");
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", name, age, marks);

    printf("\n--- Using sprintf() ---\n");
    char buffer[100];
    sprintf(buffer, "Student %s scored %.2f marks.", name, marks);
    printf("%s\n", buffer);

    printf("\n--- Using sscanf() ---\n");
    int num;
    char str[] = "100";
    sscanf(str, "%d", &num);
    printf("Converted string to integer: %d\n", num);


    printf("\n========== UNFORMATTED I/O ==========\n");

    char ch;

    printf("Enter a character (getchar): ");
    getchar();  // clear buffer
    ch = getchar();
    printf("You entered (using putchar): ");
    putchar(ch);

    printf("\n\nEnter a string (gets): ");
    getchar();
    gets(name);    // educational use
    printf("Using puts(): ");
    puts(name);

    printf("\nPress any key (getch): ");
    ch = getch();
    printf("\nYou pressed: ");
    putch(ch);

    printf("\n\nPress any key (getche): ");
    ch = getche();

    printf("\n\nProgram Finished Successfully.\n");

    return 0;
}


//classpot+hotspot-->>

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



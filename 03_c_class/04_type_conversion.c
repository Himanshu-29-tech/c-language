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



// palindrome number is or not ?


#include<stdio.h>
 main()
 {
    int num,rem,rev = 0,n1;
    printf("enter integer number ");
    scanf("%d", &num);
    n1 = num;
    while(num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    if(n1 ==  rev)
        printf("palindrome");
    else
        printf("not palindrome");
};





// prime number or not 






#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Number is not prime");
        return 0;
    }

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            break;
    }

    if (i == num)
        printf("Prime");
    else
        printf("Number is not prime");

    return 0;
}







// #Krishnmurti number --->> sum of factorial of number is equal to same number ex.-> !4*!3*!2*!1=4321


// # calculating factorial
#include <stdio.h>
int main(){
    int n1, fact = 1, i;
    scanf("%d", &n1);

    for(i = 1; i <= n1; i++)
    {
        fact = fact * i;
    }

    printf("%d", fact);
}








// # now for krishnmurti number 
#include <stdio.h>
int main()
{
    int n, kri = 0, i ,rem,n1,fact=1;
    scanf("%d",&n);
    n1 = n;
    while(n>0)
    {
        rem = n % 10;
        for (i = 1; i <= rem; i++)
            fact = fact*i;
        kri=kri+fact;
        n/=10;
        fact=1;
    }
    if(n1 == kri)
        printf("krishnmurti number");
    else
        printf("Not krishnmurti number");
}







// #calculating quadratic roots either they are imaginary,equal.... 

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float d,r1,r2;

    scanf("%d%d%d",&a,&b,&c);

    d = sqrt(b*b - 4*a*c);

    if(d > 0)
    {
        r1 = (-b + d) / (2*a);
        r2 = (-b - d) / (2*a);
        printf("r1 = %f, r2 = %f", r1, r2);
    }
    else if(d == 0)
    {
        r1 = r2 = (-b) / (2*a);
        printf("r1 = r2 = %f", r1);
    }
    else
    {
        printf("roots will be imaginary");
    }

    return 0;
}








// #fibonaci number
#include <stdio.h>
int main(){
    int a =0,b = 1, n ,sum;
    scanf("%d", &n);
    if(n==1)
        printf("%d",a);
    else if(n==2)
        printf("%d %d",a,b);
    else
    {
        sum=a+b;
        while(sum<=n1)
        {
            printf("%d",sum);
            a=b;
            b=sum;
            sum=a+b;
        }
    }
    return 0;
}







// # switch case 
#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %d", &a, &b);
    scanf(" %c", &c); 
    switch(c)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '%':
            printf("%d", a % b);
            break;

        case '/':
            printf("%d", a / b);
            break;

        default:
            printf("Invalid");
    }

    return 0;
}






//# switch case example 2//
#include <stdio.h>

int main()
{
    char a;
    int b, c;

    printf("Enter two integer values: ");
    scanf("%d%d", &b, &c);

    printf("Enter a for addition\n");
    printf("Enter s for subtraction\n");
    printf("Enter m for multiplication\n");
    printf("Enter any character: ");

    scanf(" %c", &a);   // space before %c fixes input issue

    switch(a)
    {
        case 'a':
        case 'A':
            printf("Result = %d", b + c);
            break;

        case 's':
        case 'S':
            printf("Result = %d", b - c);
            break;

        case 'm':
        case 'M':
            printf("Result = %d", b * c);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}




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



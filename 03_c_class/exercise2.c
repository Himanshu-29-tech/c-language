// Alex, a savvy shopper, is organizing items in his shopping cart. Create a program to compare the quantities of two items, X and Y, in the shopping cart. 



// The program should prompt Alex to input quantities for items X and Y. Utilize the "if" conditional statements to determine and display the relationship between these quantities in the context of Alex's shopping experience.

// Input format :
// The input consists of two space-separated integers x and y, representing quantities of items X and Y.

// Output format :
// If X > Y, then the output displays "You have more items of X".

// If X < Y, then the output displays "You have more items of Y".

// If X == Y, then the output displays "You have an equal quantity of item X and item Y".



// Answer--->>>
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x > y)
        printf("You have more items of X");
    else if(x < y)
        printf("You have more items of Y");
    else
        printf("You have an equal quantity of item X and item Y");

    return 0;
}



// Sarah is intrigued by a number reversal code she found. The code takes a positive integer n as input and then performs a series of operations within a while loop. 



// Help Sarah write a program that reverses the number. Here, Beginning and trailing zeros will be ignored. For example, if n=01230, the output will be 321.

// Input format :
// The input consists of an integer n representing the number to be reversed.

// Output format :
// The output prints an integer representing the reversed value of n.



// Refer to the sample output for the formatting specifications.

//answer-->>

#include <stdio.h>

int main()
{
    int n, rev = 0;
    scanf("%d", &n);

    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("%d", rev);

    return 0;
}

// Vivek wants to count the number of digits in the given integer and find the sum of the first and last digits of the number. 



// Write a suitable program to complete the above task using a for loop.



// Example



// Input:

// 1221



// Output:

// Sum = 2

// Digits = 4



// Explanation:

// Counting Digits: The number 1221 has 4 digits.

// First and Last Digits: The last digit is 1 (1221 % 10). To find the first digit, divide 1221 by 10 repeatedly until it's less than 10. The first digit is 1.

// The sum is 1 + 1 = 2.

// Input format :
// The input consists of an integer n, where n represents the given number for which:

// The number of digits needs to be counted.
// The sum of the first 

// Answer -->>
#include <stdio.h>

int main()
{
    int n, temp, digits = 0;
    scanf("%d", &n);

    int last = n % 10;
    temp = n;

    for(; temp > 0; temp /= 10)
        digits++;

    temp = n;
    for(; temp >= 10; temp /= 10);

    int first = temp;

    printf("Sum = %d\n", first + last);
    printf("Digits = %d", digits);

    return 0;
}

// Consider a reading challenge between friends Gwen and Ben. Input the number of pages each friend read ('a' and 'b'). Write a program that calculates and outputs the minimum and maximum total pages read. 



// If Gwen read fewer pages, the minimum count is her count; otherwise, it's Ben's count. The maximum count is the sum of their pages. Use conditional statements to solve this program.



// For example: Let us assume Gwen read 30 pages, and Ben read 40 pages. 

// The minimum number of pages read is set to the smaller of the two values, which is 30.

// The maximum number of pages is calculated by adding both values, resulting in 70 (30+40).

// Input format :
// The input consists of two space-separated integers a and b, that correspond to the number of pages read by Gwen and Ben, respectively.

// Output format :
// The output prints two space-separated integers, representing the minimum and maximum number of pages read.

#include <stdio.h>

int main()
{
    int a, b, min, max;
    scanf("%d %d", &a, &b);

    if(a < b)
        min = a;
    else
        min = b;

    max = a + b;

    printf("%d %d", min, max);

    return 0;
}
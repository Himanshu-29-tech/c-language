// Induja is intrigued by the idea of calculating the product of all odd numbers from 1 to N (inclusive). She needs a program that can quickly perform this multiplication for any given integer. 



// Write a program to help her that takes an integer as input, calculates the product of odd numbers from 1 to N using a function called OddMultiply(), and then prints the result.

// Input format :
// The input consists of a positive integer, N.

// Output format :
// The output prints the result of the product of odd numbers between 1 and N (inclusive).


#include <stdio.h>
int oddmultiply()
{
  int N;
  scanf("%d",& N);
  int result = 1;
  for(int i =1;i<=N;i+=2)
  {
    result*=i;
  }
  return result;
}




//
// Problem Statement



// Prema is fascinated by number conversions and wants to build a program to convert decimal numbers to octal numbers. She needs your help to write the program using recursion.



// Write a program to help Prema convert a given decimal number to its octal representation.



// Example



// Input:

// 200

// Output:

// 310

// Explanation:

// If the decimal number 200 has to be converted to octal,

// 200 / 8 = 25, remainder = 0

// 25 / 8 = 3, remainder = 1

// 3 / 8 = 0, remainder = 3

// The equivalent octal number of the decimal number 200 is 310.



// Function Specifications: int decimalToOctal(int)

// Input format :
// The input is an integer, representing the decimal number that Prema wants to convert to octal.

// Output format :
// The output prints a single integer, which represents the octal representation of the given decimal number.



// Refer to the sample outputs for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases will fall under the following constraints:

// 1 ≤ decimal ≤ 106

// Sample test cases :
// Input 1 :
// 25
// Output 1 :
// 31
// Input 2 :
// 200
// Output 2 :
// 310
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.





#include<stdio.h>
#include<math.h>
int decimalToOctal(int n)
{
    int oct = 0,rem,i=0;
    while(n >=1)
    {
        rem=n % 8;
        oct = oct + pow(10,i)*rem;
        i++;
        n/=8;
    }
    return oct;
}
main()
{
    int n;
    scanf("%d",&n);
    int oct = decimalToOctal(n);
    printf("%d",oct);
}


// Alex is developing a fitness application that utilizes a Collatz-like sequence to gamify step goals. The program employs a static storage specifier. Implement a function collatzSequence(int num), which calculates and displays the sequence for a given number of steps. 



// The sequence is generated based on even and odd rules.

// If n is even, then n = n / 2.
// If n is odd, then n = 3*n + 1.
// Repeat the above steps, until it becomes 1.


#include <stdio.h>
void collatzsequence(int num)
{
    static int t=0;
    t++;
    printf("%d" , num);
    while(num>1)
    {
        if(num%2==0)
        {
            num/= 2;
            printf("%d", num);
            
        }
        else
        {
            num = num * 3 + 1;
            printf("%d" , num);
            
        }
    }
}
main()
{
    int n;
    scanf("%d" ,& n);
    collatzsequence(n);
}



// Arun wants to implement a function to check whether an integer n is an Armstrong number or not using a call-by-reference function. Assist him in completing the program.



// An Armstrong number is a number that is equal to the sum of its digits each raised to the power of the number of digits.



// Function Specifications: void checkArmstrong(int *n)

// Input format :
// The input consists of an integer n.

// Output format :
// If n is an Armstrong number, the output prints "Armstrong number".

// If n is not an Armstrong number, the output prints "Not an Armstrong number".




















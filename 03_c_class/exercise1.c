// Problem Statement



// Helen is developing a program that analyzes numerical inputs. The program categorizes each input based on its value: a number that is even elicits a specific message, a number that is odd prompts a different response.



// Create a program that identifies whether the inputted number is even or odd. Ensure the program exits using a return statement after identifying the type of the number.

// Input format :
// The input consists of a single integer, N, which represents the number.

// Output format :
// The output displays one of the following:

// If the given number is even, display the statement:

// "The number N is even."

// If the given number is odd, display the statement:

// "The number N is odd."



#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("The number %d is even.", N);
        return 0;
    } else {
        printf("The number %d is odd.", N);
        return 0;
    }
}



// Design a program for managing events during a festival that runs for 'n' days. For each day, if it is both a multiple of 3 and 5, skip to the next iteration. 



// Otherwise, print "Critical Issue" for days divisible by 4, "Routine Maintenance" for days divisible by 7, and "Safe Event" for other days using the continue statement appropriately.

// Input format :
// The input consists of an integer n, representing the number of events.

// Output format :
// For each iteration, the output displays the nature of the event as 'Safe Event', 'Critical Issue', and 'Routine Maintenance' based on the given condition in separate lines.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases will fall under the following constraints:

// 2 ≤ n ≤ 100


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int day = 1; day <= n; day++) {

        // Skip if multiple of both 3 and 5
        if (day % 3 == 0 && day % 5 == 0) {
            continue;
        }

        // Check for Critical Issue
        if (day % 4 == 0) {
            printf("Critical Issue\n");
            continue;
        }

        // Check for Routine Maintenance
        if (day % 7 == 0) {
            printf("Routine Maintenance\n");
            continue;
        }

        // Otherwise Safe Event
        printf("Safe Event\n");
    }

    return 0;
}

// Anu is tasked with developing a program that continuously accepts positive integers as input. For each input, the program should calculate and display its square and cube in a concise format. This process should continue until the input is 0.

// Input format :
// The input consists of multiple positive integers separated by spaces.

// The program will terminate the process when the number 0 is entered. The number 0 should not be processed.

// Output format :
// For each positive integer n, the program should print the following on separate lines:

// "Square of n is" followed by the squared value of the given number.
// "Cube of n is" followed by the cube value of the given number.

#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        printf("Square of %d is %d\n", n, n * n);
        printf("Cube of %d is %d\n", n, n * n * n);
    }

    return 0;
}

// Max is developing a program to process a sequence of product identification numbers in a manufacturing plant. Each product ID is a five-digit number, and you need to extract and display the digits of each ID in reverse order while skipping any zeros. 



// Incorporate the break statement in the program to efficiently handle the scenario.

// Input format :
// The input consists of an integer n, representing the five-digit product ID.

// Output format :
// The output displays the product ID in reverse order skipping zeroes.



// Refer to the sample output for the formatting specifications.


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;

        if (digit == 0) {
            n /= 10;
            continue;   // skip zeros
        }

        printf("%d", digit);

        n /= 10;

        if (n == 0)
            break;   // stop when all digits processed
    }

    return 0;
}


// Fin is managing salary taxation and wants a program to determine the net salaries based on the provided salary amount. Determine the net salary: 



// If the salary is less than 50000, print "No Tax." 
// For salaries between 50000 (inclusive) and 100000 (exclusive), apply 10% tax and print the net salary after deduction.
// For 100000 or more, apply 20% tax and print the net salary after deduction.


// Implement a program that takes Fin's salary as input (integer) and calculates the net salary after converting it into float.

// Input format :
// The input consists of an integer value n, representing Fin's monthly salary.

// Output format :
// If no tax is applicable, the output prints "No Tax"

// If a tax is applicable, the output prints "Salary after X% Tax: Y" where X represents the applicable tax percent value and Y represents the net salary after deduction with two decimal places.


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float netSalary;

    if (n < 50000) {
        printf("No Tax");
    }
    else if (n >= 50000 && n < 100000) {
        netSalary = n - (n * 0.10);
        printf("Salary after 10%% Tax: %.2f", netSalary);
    }
    else {
        netSalary = n - (n * 0.20);
        printf("Salary after 20%% Tax: %.2f", netSalary);
    }

    return 0;
}


// Regis has a character in mind that he wants to convert to its ASCII value. After obtaining the ASCII value, he wants to modify the ASCII value into one of the following:



// Add 32 if the ASCII value falls between 65 and 90 (inclusive)
// Subtract 32 if the ASCII value is between 97 and 122 (inclusive)
// Print the original value for other cases


// Write a program to get a character input from the user and print its corresponding ASCII value.

// Input format :
// The input consists of the character value c.

// Output format :
// The output displays "ASCII Value: " followed by the integer value after performing the required operation on the ASCII value of c.


#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    int ascii = (int)c;

    if (ascii >= 65 && ascii <= 90) {
        ascii += 32;
    }
    else if (ascii >= 97 && ascii <= 122) {
        ascii -= 32;
    }

    printf("ASCII Value: %d", ascii);

    return 0;
}


// Ella is developing a numeric comparison program in C that compares two numbers with different datatypes (e.g., int and long).  



// Write a program that converts the integer to a long integer, compares the two numbers, and prints whether the first number is equal to, less than, or greater than the second number.

// Input format :
// The first line of input consists of an integer value 'n', representing the first number.

// The second line of input consists of a long integer value 'l', representing the second number.

// Output format :
// The output displays one of the following statements:

// If n is equal to l, it prints: "n and l are equal."
// If n is less than l, it prints: "n is less than l."
// If n is greater than l, it prints: "n is greater than l."
// Here n and l represent the first and second numbers respectively.

#include <stdio.h>

int main() {
    int n;
    long l;

    scanf("%d", &n);
    scanf("%ld", &l);

    long converted = (long)n;

    if (converted == l) {
        printf("n and l are equal.");
    }
    else if (converted < l) {
        printf("n is less than l.");
    }
    else {
        printf("n is greater than l.");
    }

    return 0;
}


// In a mobile recharge system, users enter a short voucher code to recharge their balance. You are supposed to write a program to validate the voucher by calculating the sum of even and odd digits separately to ensure the code is valid.



// If the sum of even and odd digits are equal the code is considered valid, otherwise it is not.

// Input format :
// The input consists of a short integer value n, representing the voucher code.

// Output format :
// The first line prints "Sum of even digits: " followed by the sum of even digits of n.

// The second line prints "Sum of odd digits: " followed by the sum of odd digits of n.

// The third line prints "Valid" if the sum of even and odd digits are equal, otherwise it prints "Not valid".


#include <stdio.h>

int main() {
    short n;
    scanf("%hd", &n);

    int evenSum = 0, oddSum = 0;
    int digit;

    if (n < 0) n = -n;   // handle negative input safely

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        n /= 10;
    }

    printf("Sum of even digits: %d\n", evenSum);
    printf("Sum of odd digits: %d\n", oddSum);

    if (evenSum == oddSum)
        printf("Valid");
    else
        printf("Not valid");

    return 0;
}


// In a digital library system, each book is assigned a unique identification number for tracking and inventory purposes. Develop a C program that validates the integrity of these identification numbers using the product of their digits. 



// For instance, if a book's identification number is 1234, the program should calculate the product of these digits (1 * 2 * 3 * 4) and return the result.

// Input format :
// The input consists of a long long integer n, representing the unique identification number.

// Output format :
// The output prints the product of its digits as a long long integer.



// Refer to the sample output for formatting specifications.

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long product = 1;
    int digit;

    if (n == 0) {
        printf("0");
        return 0;
    }

    if (n < 0)
        n = -n;   // handle negative input safely

    while (n > 0) {
        digit = n % 10;
        product *= digit;
        n /= 10;
    }

    printf("%lld", product);

    return 0;
}

// Mugil has been assigned a task to develop a versatile distance converter for navigation systems. The program is designed to enable users to input distances in kilometers and convert them into miles with two decimal places.



// Note: 1 km = 0.621371 miles

// Input format :
// The input consists of a integer value n, representing the distance in kilometers.

// Output format :
// The output prints the distance in miles as a double value with two decimal places.



// Refer to the sample output for formatting specifications.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double miles = n * 0.621371;

    printf("%.2lf", miles);

    return 0;
}
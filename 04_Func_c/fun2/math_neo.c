/*📘 Clear Problem Statements + Solutions (Beginner Friendly)
🔷 1. Hexagonal Garden (Area & Perimeter)
📌 Detailed Problem
You are given a hexagonal garden, which means a shape with 6 equal sides.
You need to:
Take the length of one side (a) as input
Calculate:
The area of the hexagon
The perimeter of the hexagon
Print both values rounded to 2 decimal places
🧠 What is being asked?
👉 “Given one side, find total boundary and total space inside.”
💻 Code*/
#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);

    double area = pow(a, 2) * 3.0 * (sqrt(3.0) / 2.0);
    double perimeter = 6.0 * a;

    printf("Area: %.2lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);

    return 0;
}
/*🔷 2. Quadrilateral Area
📌 Detailed Problem
You are given a quadrilateral (a shape with 4 sides).
You need to:
Input the lengths of all 4 sides (a, b, c, d)
Calculate the area using a formula
Print the result up to 2 decimal places
🧠 What is being asked?
👉 “Given 4 sides, find the area using a special formula.”
💻 Code*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    double s = (a + b + c + d) / 2.0;
    double area = sqrt((s-a)*(s-b)*(s-c)*(s-d));

    printf("Area of the quadrilateral: %.2lf\n", area);

    return 0;
}
/*🔷 3. Recursive Countdown
📌 Detailed Problem
You are given a number n (like 5 or 10).
You need to:
Print numbers from n down to 1
Use recursion (function calling itself)
Format output like:
5-4-3-2-1
🧠 What is being asked?
👉 “Print numbers backwards using recursion.”
💻 Code*/
#include <stdio.h>

void countdown(int n) {
    if (n == 0) return;

    printf("%d", n);

    if (n > 1)
        printf("-");

    countdown(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    countdown(n);
    return 0;
}
/*🔷 4. Odd Number of Factors
📌 Detailed Problem
You are given two numbers n and m representing a range.
You need to:
Check all numbers between n and m
Count how many numbers have an odd number of factors
Print only the count
🧠 What is being asked?
👉 “How many numbers in this range have odd number of divisors?”
💡 Important Insight
👉 Only perfect squares have odd number of factors
💻 Code*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int start = ceil(sqrt(n));
    int end = floor(sqrt(m));

    int count = end - start + 1;

    if (count < 0)
        count = 0;

    printf("%d\n", count);

    return 0;
}
/*🔷 5. Taylor Series (e^x)
📌 Detailed Problem
You are given:
A number x
Number of terms n
You need to:
Calculate value of e^x using Taylor series
Add terms like:
1 + x/1! + x²/2! + x³/3! + ...
Print result rounded to 2 decimal places
🧠 What is being asked?
👉 “Approximate e^x using series expansion.”
💻 Code*/
#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    double sum = 1.0;

    for (int i = 1; i <= n; i++) {
        sum += pow(x, i) / factorial(i);
    }

    printf("%.2lf\n", sum);

    return 0;
}/*
🚀 FINAL UNDERSTANDING (SUPER IMPORTANT)
🔑 What each question is testing
Question	Concept
Hexagon	Formula + math functions
Quadrilateral	Advanced formula (sqrt)
Countdown	Recursion
Odd factors	Mathematical pattern
Taylor series	Loop + math logic*/

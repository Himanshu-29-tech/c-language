/*
===========================================================
📌 QUESTION: Check Arithmetic Sequence in Digits (auto)
===========================================================

🧠 WHAT IS ASKED?
- Input integer N (use auto)
- Check if digits form arithmetic sequence
- Print:
   ✔ "Yes" → if constant difference
   ✔ "No"  → otherwise

-----------------------------------------------------------
✅ APPROACH:
1. Input N using auto
2. Extract last digit → prev
3. Extract next digit → curr
4. Find initial difference → diff = prev - curr
5. Continue checking all digits:
   - If difference changes → print "No"
6. If all same → print "Yes"

-----------------------------------------------------------
🔑 KEY POINTS:
- Use %10 to extract digits
- Use /10 to remove digits
- auto works like normal int (local variable)

-----------------------------------------------------------
🔄 FLOW:
INPUT → EXTRACT DIGITS → COMPARE DIFF → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    auto int N;
    scanf("%d", &N);

    if(N < 10)
    {
        printf("Yes");
        return 0;
    }

    int prev = N % 10;
    N /= 10;

    int curr = N % 10;
    int diff = prev - curr;

    prev = curr;
    N /= 10;

    while(N > 0)
    {
        curr = N % 10;

        if(prev - curr != diff)
        {
            printf("No");
            return 0;
        }

        prev = curr;
        N /= 10;
    }

    printf("Yes");

    return 0;
}/*
===========================================================
📌 QUESTION: Sum of Factorials of Digits (Global Variable)
===========================================================

🧠 WHAT IS ASKED?
- Input number n (global variable)
- Find sum of factorial of each digit
- Check:
   ✔ If sum == n → "Can go!"
   ✔ Else → "Cannot go!"

-----------------------------------------------------------
✅ APPROACH:
1. Declare global variable n
2. Create function to calculate factorial
3. Extract digits using %10
4. Add factorial of each digit
5. Compare sum with original number

-----------------------------------------------------------
🔑 KEY POINTS:
- Global variable declared outside main
- Use loop for factorial
- Preserve original value

-----------------------------------------------------------
🔄 FLOW:
INPUT → EXTRACT DIGITS → FACTORIAL → SUM → COMPARE → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

// Global variable
int n;

// Function to calculate factorial
int factorial(int x)
{
    int fact = 1;
    for(int i = 1; i <= x; i++)
        fact *= i;
    return fact;
}

int main()
{
    scanf("%d", &n);

    int temp = n;
    int sum = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == n)
        printf("Can go!");
    else
        printf("Cannot go!");

    return 0;
}/*
===========================================================
📌 QUESTION: Static Variable Counter (Function Calls)
===========================================================

🧠 WHAT IS ASKED?
- Input initial value n
- Use static variable inside function
- Function called 3 times
- Each time:
   → Add 3
   → Print updated value

-----------------------------------------------------------
✅ APPROACH:
1. Create function display()
2. Use static variable inside it
3. Initialize static variable with input (first call only)
4. Increment by 3 every call
5. Call function 3 times

-----------------------------------------------------------
🔑 KEY POINTS:
- static retains value between calls
- Initialized only once
- Function remembers previous value

-----------------------------------------------------------
🔄 FLOW:
INPUT → CALL FUNCTION → UPDATE → PRINT (3 TIMES)
-----------------------------------------------------------
*/

#include <stdio.h>

void display(int n)
{
    static int count;   // retains value

    // Initialize only first time
    if(count == 0)
        count = n;

    count += 3;
    printf("%d\n", count);
}

int main()
{
    int n;
    scanf("%d", &n);

    // Call function 3 times
    display(n);
    display(n);
    display(n);

    return 0;
}/*
===========================================================
📌 QUESTION: Trapezoid Area & Perimeter (register)
===========================================================

🧠 WHAT IS ASKED?
- Input:
   a, b → parallel sides
   h → height
   c, d → non-parallel sides
- Calculate:
   ✔ Area = ((a + b) / 2) * h
   ✔ Perimeter = a + b + c + d
- Use register storage class

-----------------------------------------------------------
✅ APPROACH:
1. Declare variables using register
2. Input all values
3. Calculate area using formula
4. Calculate perimeter
5. Print results

-----------------------------------------------------------
🔑 KEY POINTS:
- register → faster access (hint to compiler)
- Use double for area
- Print area with %.2lf

-----------------------------------------------------------
🔄 FLOW:
INPUT → CALCULATE AREA → CALCULATE PERIMETER → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    register int a, b, h, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);
    scanf("%d", &c);
    scanf("%d", &d);

    double area = ((a + b) / 2.0) * h;
    int perimeter = a + b + c + d;

    printf("Area: %.2lf\n", area);
    printf("Perimeter: %d", perimeter);

    return 0;
}/*
===========================================================
📌 QUESTION: Difference using Square Roots (Global Variable)
===========================================================

🧠 WHAT IS ASKED?
- Input N (global variable)
- Calculate:
   1. Sum of √i from 1 to N
   2. √(sum of i from 1 to N)
- Find difference:
   sum(√i) - √(sum of i)
- Print result (2 decimal places)

-----------------------------------------------------------
✅ APPROACH:
1. Declare global variable N
2. Loop from 1 to N:
   → sumSqrt += sqrt(i)
   → sum += i
3. Compute sqrt(sum)
4. Find difference
5. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Use #include <math.h>
- sqrt() returns double
- Use %.2lf for formatting

-----------------------------------------------------------
🔄 FLOW:
INPUT → LOOP → CALCULATE → DIFFERENCE → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

// Global variable
int N;

int main()
{
    scanf("%d", &N);

    double sumSqrt = 0.0;
    int sum = 0;

    for(int i = 1; i <= N; i++)
    {
        sumSqrt += sqrt(i);
        sum += i;
    }

    double result = sumSqrt - sqrt(sum);

    printf("Difference: %.2lf", result);

    return 0;
}
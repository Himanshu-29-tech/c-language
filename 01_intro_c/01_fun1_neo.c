/*
===========================================================


===========================================================
📌 QUESTION 6: Overwrite Variable Value
===========================================================

🧠 WHAT IS ASKED?
- Assign value 15
- Print it
- Change to 10
- Print again

-----------------------------------------------------------
✅ APPROACH:
1. Declare variable with 15
2. Print it
3. Reassign value = 10
4. Print updated value

-----------------------------------------------------------
🔑 KEY POINTS:
- Variables can be updated anytime
- New value overwrites old value

-----------------------------------------------------------
🔄 FLOW:
ASSIGN → PRINT → UPDATE → PRINT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int num = 15;

    printf("%d\n", num);

    num = 10;

    printf("%d", num);

    return 0;
}


/*
===========================================================
📌 QUESTION 7: Print Float with Separator
===========================================================

🧠 WHAT IS ASKED?
- Print float twice with "@@@"

-----------------------------------------------------------
✅ APPROACH:
1. Declare float
2. Print using %f twice
3. Add separator in between

-----------------------------------------------------------
🔑 KEY POINTS:
- %f prints 6 decimal places by default

-----------------------------------------------------------
🔄 FLOW:
DECLARE → PRINT → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    float x = 9.0;

    printf("%f@@@%f", x, x);

    return 0;
}


/*
===========================================================
📌 QUESTION 8: Print Two Integers (Comma Separated)
===========================================================

🧠 WHAT IS ASKED?
- Print two integers separated by comma

-----------------------------------------------------------
✅ APPROACH:
1. Declare two integers
2. Print using %d,%d

-----------------------------------------------------------
🔑 KEY POINTS:
- Comma is inside string

-----------------------------------------------------------
🔄 FLOW:
DECLARE → PRINT → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int x = 5, y = 6;

    printf("%d,%d", x, y);

    return 0;
}


/*
===========================================================
📌 QUESTION 9: Roll Number and Section
===========================================================

🧠 WHAT IS ASKED?
- Input section (char) and roll number
- Print formatted output

-----------------------------------------------------------
✅ APPROACH:
1. Input char and int
2. Print using formatted string

-----------------------------------------------------------
🔑 KEY POINTS:
- Use space before %c in scanf

-----------------------------------------------------------
🔄 FLOW:
INPUT → PRINT → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    char c;
    int d;

    scanf(" %c", &c);
    scanf("%d", &d);

    printf("Roll number %d in Section %c", d, c);

    return 0;
}


/*
===========================================================
📌 QUESTION 10: Constant Variable Example
===========================================================

🧠 WHAT IS ASKED?
- Declare constant value
- Print it

-----------------------------------------------------------
✅ APPROACH:
1. Use const keyword
2. Assign value
3. Print

-----------------------------------------------------------
🔑 KEY POINTS:
- const variables cannot be changed

-----------------------------------------------------------
🔄 FLOW:
DECLARE → PRINT → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    const int maxAllowedTime = 120;

    printf("Maximum Allowed Time: %d minutes", maxAllowedTime);

    return 0;
}


/*
===========================================================
📌 QUESTION 11: Distance Calculation
===========================================================

🧠 WHAT IS ASKED?
- Calculate distance using formula:
  distance = s*t + 0.5*a*t^2

-----------------------------------------------------------
✅ APPROACH:
1. Input s, t, a
2. Apply formula
3. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Use double for precision
- Use %.2lf

-----------------------------------------------------------
🔄 FLOW:
INPUT → CALCULATE → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    double s, t, a;

    scanf("%lf", &s);
    scanf("%lf", &t);
    scanf("%lf", &a);

    double distance = s * t + 0.5 * a * t * t;

    printf("%.2lf", distance);

    return 0;
}


/*
===========================================================
📌 QUESTION 12: Marathon Distance Check
===========================================================

🧠 WHAT IS ASKED?
- Speed = 8 mph
- Check if distance ≥ 20

-----------------------------------------------------------
✅ APPROACH:
1. Input time
2. Distance = 8 × time
3. Use ternary operator

-----------------------------------------------------------
🔑 KEY POINTS:
- Use (condition ? true : false)

-----------------------------------------------------------
🔄 FLOW:
INPUT → CALCULATE → CHECK → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    float time;
    scanf("%f", &time);

    float distance = 8 * time;

    (distance >= 20)
    ? printf("Alex can cover at least 20 miles.")
    : printf("Alex cannot cover at least 20 miles.");

    return 0;
}


/*
===========================================================
📌 QUESTION 13: Budget Check with Interest
===========================================================

🧠 WHAT IS ASKED?
- Salary ≥ 2000 → print message
- Else → borrow + 5% interest

-----------------------------------------------------------
✅ APPROACH:
1. Input salary
2. Use ternary
3. Calculate borrowed and interest

-----------------------------------------------------------
🔑 KEY POINTS:
- Interest = 5%
- Use %.2lf

-----------------------------------------------------------
🔄 FLOW:
INPUT → CHECK → CALCULATE → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    double salary;
    scanf("%lf", &salary);

    (salary >= 2000)
    ? printf("Alice can cover all her bills.")
    : printf("%.2lf", (2000 - salary) + ((2000 - salary) * 0.05));

    return 0;
}


/*
===========================================================
📌 FINAL QUICK REVISION
===========================================================

🔹 Variable overwrite → reassignment replaces old value
🔹 %f → float (default 6 decimals)
🔹 %d,%d → comma-separated output
🔹 scanf(" %c") → avoids input issue
🔹 const → fixed value
🔹 %.2lf → 2 decimal precision
🔹 ternary → (condition ? true : false)

===========================================================
*/
/*
===========================================================
📌 QUESTION: Budget Check with Interest (Using ! operator)
===========================================================

🧠 WHAT IS ASKED?
- If salary >= 2000 → she can pay bills
- If salary < 2000 → she must borrow + 5% interest
- Use logical NOT (!) with ternary operator

-----------------------------------------------------------
✅ APPROACH:
1. Input salary
2. Condition: !(salary >= 2000)
   → means salary < 2000
3. Use ternary:
   - If NOT condition → calculate payment
   - Else → print message

-----------------------------------------------------------
🔑 KEY POINTS:
- !(salary >= 2000) ≡ salary < 2000
- ! reverses the condition
- Clean use of ternary

-----------------------------------------------------------
🔄 FLOW:
INPUT → APPLY ! CONDITION →
    TRUE → CALCULATE PAYMENT
    FALSE → PRINT MESSAGE
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    double salary;
    scanf("%lf", &salary);

    (!(salary >= 2000))
    ? printf("%.2lf", (2000 - salary) + ((2000 - salary) * 0.05))
    : printf("Alice can cover all her bills.");

    return 0;
}/*
===========================================================
📌 QUESTION: Sum of Last Two Digits
===========================================================

🧠 WHAT IS ASKED?
- Input an integer n
- Find the sum of its last two digits

-----------------------------------------------------------
✅ APPROACH:
1. Extract last digit → n % 10
2. Remove last digit → n / 10
3. Extract second last digit → (n / 10) % 10
4. Add both digits
5. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- %10 → gives last digit
- /10 → removes last digit
- Works for any number ≥ 10

-----------------------------------------------------------
🔄 FLOW:
INPUT → EXTRACT DIGITS → ADD → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int last = n % 10;
    int secondLast = (n / 10) % 10;

    int sum = last + secondLast;

    printf("%d", sum);

    return 0;
}/*
===========================================================
📌 QUESTION: Maximum of Two Numbers (Using Relational Operators Only)
===========================================================

🧠 WHAT IS ASKED?
- Input two integers n and m
- Find maximum using ONLY relational operators

-----------------------------------------------------------
✅ APPROACH:
1. Input n and m
2. Use relational operator (>) inside ternary
3. If n > m → n is max
   Else → m is max
4. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Use only relational operator (>)
- Ternary operator is allowed
- No if-else used

-----------------------------------------------------------
🔄 FLOW:
INPUT → COMPARE (>) → SELECT MAX → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int max = (n > m) ? n : m;

    printf("%d", max);

    return 0;
}/*
===========================================================
📌 ERROR FIX: Maximum of Two Numbers
===========================================================

❌ YOUR MISTAKE:
1. Extra closing bracket in printf ❌
   printf("%d",(n > m)?n:m));  → wrong

-----------------------------------------------------------
✅ CORRECTED CODE:
*/

#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    printf("%d", (n > m) ? n : m);   // fixed

    return 0;
}

/*
-----------------------------------------------------------
🔑 KEY POINT:
- Ternary syntax must be:
  condition ? value1 : value2;
- Always balance brackets properly

-----------------------------------------------------------
*//*
===========================================================
📌 QUESTION: Road Trip Total Cost Calculation
===========================================================

🧠 WHAT IS ASKED?
- Calculate total trip cost using:
  - Miles traveled
  - Gas cost per liter
  - Average miles per liter
  - Parking fee
  - Toll charges

-----------------------------------------------------------
✅ FORMULA USED:
Fuel Cost = (miles / average_miles) * cost_of_gas

Total Cost = Fuel Cost + parking + toll

-----------------------------------------------------------
✅ APPROACH:
1. Input all values
2. Calculate fuel used → miles / average
3. Multiply by gas price → fuel cost
4. Add parking + toll
5. Print result (2 decimal places)

-----------------------------------------------------------
🔑 KEY POINTS:
- Use double for division
- Maintain correct formula order
- Print using %.2lf

-----------------------------------------------------------
🔄 FLOW:
INPUT → CALCULATE FUEL → ADD OTHER COSTS → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int miles, gasCost, parking, toll;
    double avgMiles;

    scanf("%d", &miles);
    scanf("%d", &gasCost);
    scanf("%lf", &avgMiles);
    scanf("%d", &parking);
    scanf("%d", &toll);

    double fuelCost = (miles / avgMiles) * gasCost;

    double totalCost = fuelCost + parking + toll;

    printf("%.2lf", totalCost);

    return 0;
}/*
===========================================================
📌 QUESTION: Discount Calculation (Relational + Ternary)
===========================================================

🧠 WHAT IS ASKED?
- Input total cost n
- Apply discount:
   IF (n > 50 AND n divisible by 3)
       → 50% discount
   ELSE
       → (n/5 + 2) discount
- Print final amount

-----------------------------------------------------------
✅ APPROACH:
1. Input n
2. Use condition:
   (n > 50 && n % 3 == 0)
3. Apply ternary:
   - True → n - (n * 0.5)
   - False → n - (n/5 + 2)
4. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Use logical AND (&&)
- Use modulus (%) for divisibility
- Ternary operator simplifies logic

-----------------------------------------------------------
🔄 FLOW:
INPUT → CHECK CONDITION → APPLY DISCOUNT → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int finalAmount = (n > 50 && n % 3 == 0) 
                      ? n - (n * 0.5)
                      : n - ((n / 5) + 2);

    printf("%d", finalAmount);

    return 0;
}/*
===========================================================
📌 QUESTION: Total Audience in Talent Show
===========================================================

🧠 WHAT IS ASKED?
- Boys = 1/3 of total
- Girls = 3/6 = 1/2 of total
- Remaining = Adults
- Given: girls are 'x' more than adults
- Find total people

-----------------------------------------------------------
✅ MATHEMATICAL IDEA:
Let total = T

Boys = T/3
Girls = T/2
Adults = T - (T/3 + T/2)

LCM = 6:
T/3 = 2T/6
T/2 = 3T/6

Adults = T - (5T/6) = T/6

Given:
Girls - Adults = x
(T/2 - T/6) = x
(3T/6 - T/6) = x
(2T/6) = x
T/3 = x
T = 3x

-----------------------------------------------------------
✅ APPROACH:
1. Input x
2. Total = 3 * x
3. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Convert fractions properly
- Solve equation step-by-step
- Final result: T = 3x

-----------------------------------------------------------
🔄 FLOW:
INPUT → APPLY FORMULA (3x) → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int total = 3 * x;

    printf("%d people were there in total", total);

    return 0;
}/*
===========================================================
📌 QUESTION: Voting Eligibility (Ternary Operator)
===========================================================

🧠 WHAT IS ASKED?
- Input age
- Check if age ≥ 18
- Print eligibility using ternary operator

-----------------------------------------------------------
✅ APPROACH:
1. Input age
2. Use condition (age >= 18)
3. Apply ternary:
   - True → "Eligible for Voting"
   - False → "Not eligible for Voting"
4. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Use relational operator (>=)
- Use ternary operator (? :)
- No if-else required

-----------------------------------------------------------
🔄 FLOW:
INPUT → CHECK AGE → PRINT RESULT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    (age >= 18)
    ? printf("Eligible for Voting")
    : printf("Not eligible for Voting");

    return 0;
}/*
===========================================================
📌 QUESTION: Unique Pair Combinations
===========================================================

🧠 WHAT IS ASKED?
- Given number of items (num)
- Find total unique pairs possible

-----------------------------------------------------------
✅ FORMULA:
Combinations = (num * (num - 1)) / 2

-----------------------------------------------------------
✅ APPROACH:
1. Input num
2. Apply formula
3. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- This is nC2 (combination of 2)
- Works even when num = 1 → output = 0

-----------------------------------------------------------
🔄 FLOW:
INPUT → APPLY FORMULA → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int combinations = (num * (num - 1)) / 2;

    printf("%d", combinations);

    return 0;
}
/*
===========================================================
📌 QUESTION: Traffic Speed Monitoring System
===========================================================

🧠 WHAT IS ASKED?
- Input road type:
   1 → Residential (25 km/h)
   2 → City (35 km/h)
   3 → Highway (55 km/h)
- Input current speed
- Compare with speed limit
- Print:
   "Below"  → speed < limit
   "Normal" → speed == limit
   "Above"  → speed > limit

-----------------------------------------------------------
✅ APPROACH:
1. Input choice and speed
2. Assign speed limit based on choice
3. Compare speed with limit
4. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Use conditional logic for selecting limit
- Use relational operators (<, ==, >)
- Output must match exact format

-----------------------------------------------------------
🔄 FLOW:
INPUT → SET LIMIT → COMPARE → OUTPUT
-----------------------------------------------------------
*/
#include <stdio.h>

int main()
{
    int choice, speed;
    int limit;

    scanf("%d", &choice);
    scanf("%d", &speed);

    // Set limit using switch
    switch(choice)
    {
        case 1:
            limit = 25;
            break;

        case 2:
            limit = 35;
            break;

        case 3:
            limit = 55;
            break;
    }

    // Compare speed
    if(speed < limit)
        printf("Below");
    else if(speed == limit)
        printf("Normal");
    else
        printf("Above");

    return 0;



/*
===========================================================
📌 QUESTION: Sum of First N Numbers (While Loop)
===========================================================

🧠 WHAT IS ASKED?
- Input a number N
- Find sum of numbers from 1 to N
- Use while loop

-----------------------------------------------------------
✅ APPROACH:
1. Input N
2. Initialize:
   i = 1, sum = 0
3. Run while loop till i ≤ N
4. Add i to sum
5. Increment i
6. Print sum

-----------------------------------------------------------
🔑 KEY POINTS:
- while loop used for repetition
- sum accumulates values
- loop runs N times

-----------------------------------------------------------
🔄 FLOW:
INPUT → INITIALIZE → LOOP → ADD → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1, sum = 0;

    while(i <= N)
    {
        sum += i;
        i++;
    }

    printf("%d", sum);

    return 0;
}


/*
===========================================================
📌 QUESTION: Factorial Calculation (For Loop)
===========================================================

🧠 WHAT IS ASKED?
- Input a number n
- Calculate factorial (n!)
- Use for loop

-----------------------------------------------------------
✅ APPROACH:
1. Input n
2. Initialize fact = 1
3. Loop from 1 to n
4. Multiply fact = fact * i
5. Print result

-----------------------------------------------------------
🔑 KEY POINTS:
- Factorial = product of numbers from 1 to n
- Use for loop for controlled iteration
- Start fact from 1 (not 0)

-----------------------------------------------------------
🔄 FLOW:
INPUT → INITIALIZE → LOOP → MULTIPLY → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("%d", fact);

    return 0;
}

/*
===========================================================
📌 QUESTION: Employee Growth Series
===========================================================

🧠 WHAT IS ASKED?
- Given a series:
  20, 60, 104, 152, 204, ...
- Print first N terms using for loop

-----------------------------------------------------------
✅ PATTERN OBSERVATION:
Differences:
60 - 20 = 40
104 - 60 = 44
152 - 104 = 48
204 - 152 = 52

👉 Difference increases by +4 each time

-----------------------------------------------------------
✅ APPROACH:
1. First term = 20
2. Initial difference = 40
3. Loop N times:
   - Print current term
   - Add difference to term
   - Increase difference by 4

-----------------------------------------------------------
🔑 KEY POINTS:
- Pattern-based series
- Difference increases by constant value (4)
- Use for loop

-----------------------------------------------------------
🔄 FLOW:
INPUT → INITIALIZE → LOOP → PRINT → UPDATE → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int term = 20;
    int diff = 40;

    for(int i = 1; i <= N; i++)
    {
        printf("%d ", term);

        term += diff;
        diff += 4;
    }

    return 0;
}







//                   next                                //
/*
===========================================================
📌 QUESTION: Even or Odd using GOTO
===========================================================

🧠 WHAT IS ASKED?
- Input an integer n
- Use goto to check:
   - Even → print "n is an even number."
   - Odd  → print "n is an odd number."

-----------------------------------------------------------
✅ APPROACH:
1. Input number n
2. Check condition:
   - If n % 2 == 0 → goto EVEN
   - Else → goto ODD
3. Use labels to print result

-----------------------------------------------------------
🔑 KEY POINTS:
- goto jumps to labeled statement
- Use labels like EVEN: and ODD:
- Avoid unnecessary goto in real programs (used here for learning)

-----------------------------------------------------------
🔄 FLOW:
INPUT → CHECK EVEN/ODD → GOTO LABEL → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n % 2 == 0)
        goto EVEN;
    else
        goto ODD;

EVEN:
    printf("%d is an even number.", n);
    goto END;

ODD:
    printf("%d is an odd number.", n);

END:
    return 0;
}/*
===========================================================
📌 QUESTION: Festival Event Management (Using continue)
===========================================================

🧠 WHAT IS ASKED?
- Loop from day 1 to n
- Conditions:
   1. If day divisible by BOTH 3 and 5 → skip (continue)
   2. If divisible by 4 → "Critical Issue"
   3. If divisible by 7 → "Routine Maintenance"
   4. Else → "Safe Event"

-----------------------------------------------------------
✅ APPROACH:
1. Input n
2. Loop from 1 to n
3. Check:
   - If (i % 3 == 0 && i % 5 == 0) → continue
   - Else if (i % 4 == 0) → print "Critical Issue"
   - Else if (i % 7 == 0) → print "Routine Maintenance"
   - Else → print "Safe Event"

-----------------------------------------------------------
🔑 KEY POINTS:
- continue skips current iteration
- Order of conditions is important
- Check skip condition FIRST

-----------------------------------------------------------
🔄 FLOW:
INPUT → LOOP → CHECK SKIP → APPLY CONDITIONS → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            continue;

        if(i % 4 == 0)
            printf("Critical Issue\n");
        else if(i % 7 == 0)
            printf("Routine Maintenance\n");
        else
            printf("Safe Event\n");
    }

    return 0;
}/*
===========================================================
📌 QUESTION: Odd Temperatures (Skip Multiples of 3)
===========================================================

🧠 WHAT IS ASKED?
- Input range m to n
- Print numbers that are:
   ✔ Odd
   ✔ NOT divisible by 3
- Use continue to skip unwanted values

-----------------------------------------------------------
✅ APPROACH:
1. Input m and n
2. Loop from m to n
3. If number is divisible by 3 → continue (skip)
4. Check if number is odd → print
5. Print values separated by space

-----------------------------------------------------------
🔑 KEY POINTS:
- Odd → n % 2 != 0
- Skip multiples of 3 first
- Use continue to skip iteration

-----------------------------------------------------------
🔄 FLOW:
INPUT → LOOP → CHECK (MULTIPLE OF 3) → SKIP →
CHECK ODD → PRINT → OUTPUT
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    for(int i = m; i <= n; i++)
    {
        if(i % 3 == 0)
            continue;

        if(i % 2 != 0)
            printf("%d ", i);
    }

    return 0;
}/*
===========================================================
📌 QUESTION: Number Type Identification (Using return)
===========================================================

🧠 WHAT IS ASKED?
- Input an integer N
- Identify:
   ✔ Positive
   ✔ Negative
   ✔ Zero
- Use return statement after printing

-----------------------------------------------------------
✅ APPROACH:
1. Input N
2. Check conditions:
   - If N > 0 → print positive → return
   - If N < 0 → print negative → return
   - Else → print zero

-----------------------------------------------------------
🔑 KEY POINTS:
- return exits the program immediately
- Each condition ends with return
- Avoid unnecessary checks after return

-----------------------------------------------------------
🔄 FLOW:
INPUT → CHECK → PRINT → RETURN
-----------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if(N > 0)
    {
        printf("The number %d is positive.", N);
        return 0;
    }

    if(N < 0)
    {
        printf("The number %d is negative.", N);
        return 0;
    }

    printf("The number %d is zero.", N);

    return 0;
}
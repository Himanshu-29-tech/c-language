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
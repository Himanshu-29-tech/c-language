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

    // Assign speed limit
    if(choice == 1)
        limit = 25;
    else if(choice == 2)
        limit = 35;
    else
        limit = 55;

    // Compare and print result
    if(speed < limit)
        printf("Below");
    else if(speed == limit)
        printf("Normal");
    else
        printf("Above");

    return 0;
}
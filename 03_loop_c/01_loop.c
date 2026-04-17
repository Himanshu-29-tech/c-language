// # 🔁 Loops in C — Complete Notes + Examples

// ## 📌 What is a Loop?
// A loop is used to repeat a block of code multiple times until a specified condition is satisfied.

// ### Why loops are useful
// - Avoid writing the same code repeatedly
// - Improve readability
// - Reduce errors
// - Enable traversal of arrays and data structures
// - Save development time

// ---

// # 🔹 Types of Loops in C
// C supports three looping constructs:

// 1. while loop  
// 2. do...while loop  
// 3. for loop  

// ---

// # 🟢 While Loop

// ### Definition
// A **while loop** executes a block of code as long as a condition is true.

// ### Syntax

while (condition)
{
    // code block
}


// ### Key Points
// - Entry-controlled loop
// - Condition checked before execution
// - Used when number of iterations is unknown

// ### Flow
// Condition → True → Execute → Repeat  
// Condition → False → Exit

// ### Example


#include <stdio.h>

int main()
{
    int i = 1;

    while(i <= 5)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}

// Output:

1 2 3 4 5


// ---

// # 🟡 Do-While Loop

// ### Definition
// Executes the loop body **at least once**, then checks the condition.

// ### Syntax

do
{
    // code block
} while(condition);


// ### Key Points
// - Exit-controlled loop
// - Runs once even if condition is false

// ### Example

#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d ", i);
        i++;
    } while(i <= 5);

    return 0;
}


// ---

// # 🔵 Difference: While vs Do-While

// | Feature | while | do-while |
// |--------|------|---------|
// Condition Check | Before loop | After loop |
// Minimum Runs | 0 | 1 |
// Type | Entry-controlled | Exit-controlled |
// Semicolon | Not required | Required |

// ---

// # 🔴 For Loop

// ### Definition
// Used when number of iterations is known.

// ### Syntax

for(initialization; condition; update)
{
    // body
}


// ### Flow
// Initialize → Check → Run → Update → Repeat

// ### Example

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
```

---

// # 🔁 Nested Loops

// A loop inside another loop.

// ### Example


#include <stdio.h>

int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }

    return 0;
}


// Output:

(1,1) (1,2) (1,3)
(2,1) (2,2) (2,3)
(3,1) (3,2) (3,3)
```

---

// # ♾ Infinite Loop

// A loop that never ends unless externally stopped.

// ### Example

#include <stdio.h>

int main()
{
    while(1)
    {
        printf("Hello ");
    }
}




// ---

// # ✅ When to Use Which Loop

// | Situation | Best Loop |
// |---------|-----------|
// Unknown iterations | while |
// At least one execution needed | do-while |
// Fixed number of repetitions | for |
// Matrix / pattern problems | nested loops |

// ---

// # 🎯 Summary

// Loops are fundamental control structures that:
// - automate repetition
// - simplify logic
// - improve performance
// - reduce code duplication






// Mastering loops is essential for:
// - problem solving
// - algorithms
// - competitive programming
// - real-world software logic






// ---

// ⭐ **Pro Tip:**  
// If you know iterations → use `for`  
// If condition controls loop → use `while`  
// If first run must happen → use `do-while`

// ---


/*
===========================================================
📌 QUESTION 1: Rearrange Array (Negatives First)
===========================================================

🧠 PROBLEM:
Move all negative elements to the beginning.
(Order does NOT matter)

-----------------------------------------------------------
✅ APPROACH (Two-pointer technique):
- Use variable j to track position of negatives
- Traverse array
- If arr[i] < 0 → swap with arr[j]
- Increment j
-----------------------------------------------------------
*/

#include <stdio.h>

// Function to rearrange array
void rearrange(int arr[], int n) {
    int j = 0; // Position for negative elements

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // Swap arr[i] with arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j++; // Move boundary forward
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrange(arr, n);
    printArray(arr, n);

    return 0;
}

/*
📝 QUICK NOTES:
- Pattern: Partitioning
- Similar to QuickSort partition logic
- Condition: arr[i] < 0

        ┌──────────────┐
        │   START      │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │ Input n      │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │ Input array  │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │ j = 0        │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │ i = 0        │
        └──────┬───────┘
               ↓
        ┌────────────────────┐
        │ i < n ?            │
        └──────┬─────────────┘
               ↓ YES
        ┌────────────────────┐
        │ arr[i] < 0 ?       │
        └──────┬───────┬─────┘
             YES       NO
              ↓         ↓
   ┌────────────────┐   │
   │ Swap arr[i],   │   │
   │ arr[j]         │   │
   └──────┬─────────┘   │
          ↓             │
   ┌──────────────┐     │
   │ j = j + 1    │     │
   └──────┬───────┘     │
          ↓             │
        (continue loop)─┘
               ↓
        ┌──────────────┐
        │ Print array  │
        └──────┬───────┘
               ↓
        ┌──────────────┐
        │    END       │
        └──────────────┘

        
===========================================================
📌 QUESTION 2: Remove Last Player
===========================================================

🧠 PROBLEM:
Remove last element from array

-----------------------------------------------------------
✅ APPROACH:
- Input array
- Print only n-1 elements
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print till n-1
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
📝 QUICK NOTES:
- Deletion at end = just reduce size
- No shifting needed

===========================================================
📌 QUESTION 3: Insert Element at Beginning
===========================================================

🧠 PROBLEM:
Insert new element at index 0

-----------------------------------------------------------
✅ APPROACH:
1. Shift all elements right
2. Insert at index 0
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n + 1];

    // Input existing elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x); // New element

    // Shift right
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert at beginning
    arr[0] = x;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
📝 QUICK NOTES:
- Insertion = shifting required
- Always shift from back to avoid overwrite

===========================================================
📌 QUESTION 4: Sum of Alternate Elements
===========================================================

🧠 PROBLEM:
Sum elements at even indices (0,2,4,...)

-----------------------------------------------------------
✅ APPROACH:
- Loop with i += 2
- Add elements
-----------------------------------------------------------
*/

#include <stdio.h>

// Function to calculate sum
int sumAlternateElements(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumAlternateElements(arr, n);
    printf("%d", result);

    return 0;
}

/*
📝 QUICK NOTES:
- Alternate = skip one element
- Use i += 2

===========================================================
📌 FINAL SUMMARY (VERY IMPORTANT 🔥)
===========================================================

🔹 KEY PATTERNS:

1. Rearranging Array
   → Use swapping + pointer (j)

2. Deletion
   → Reduce size (n-1)

3. Insertion
   → Shift right → insert

4. Alternate Elements
   → i += 2

-----------------------------------------------------------
🎯 EXAM APPROACH:

STEP 1 → Identify operation:
✔ Rearrange
✔ Insert
✔ Delete
✔ Sum

STEP 2 → Apply pattern:
✔ Condition (arr[i] < 0)
✔ Index logic (i += 2)
✔ Shifting (i-- loop)

STEP 3 → Print result carefully

-----------------------------------------------------------
🚀 MASTER THESE = 90% ARRAY QUESTIONS COVERED

===========================================================
*/

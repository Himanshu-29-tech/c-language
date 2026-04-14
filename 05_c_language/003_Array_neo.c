/*
===========================================================
📌 QUESTION 1: Find Maximum in Rotated Sorted Array
===========================================================

🧠 PROBLEM:
Array was sorted in ascending order but rotated.
Find the maximum element using Binary Search.

Example:
Input: 5
       4 5 1 2 3
Output: 5

-----------------------------------------------------------
✅ APPROACH (Binary Search):
- Maximum element is the "pivot" (largest element)
- Compare mid with next element
- If arr[mid] > arr[mid+1] → mid is maximum
- Otherwise, decide search direction
-----------------------------------------------------------
*/

#include <stdio.h>

// Function to find maximum element
int findMax(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        // If already sorted (not rotated)
        if (arr[low] <= arr[high]) {
            return arr[high];
        }

        int mid = (low + high) / 2;

        // Check if mid is maximum
        if (mid < n - 1 && arr[mid] > arr[mid + 1]) {
            return arr[mid];
        }

        // Decide search direction
        if (arr[mid] >= arr[low]) {
            low = mid + 1;  // Go right
        } else {
            high = mid - 1; // Go left
        }
    }

    return -1; // Safety
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);
    printf("%d", max);

    return 0;
}

/*
📝 QUICK NOTES:
- Rotated array → find pivot
- Condition: arr[mid] > arr[mid+1]
- Time Complexity: O(log n)

===========================================================
📌 QUESTION 2: Closest Element ≤ Target (Floor Value)
===========================================================

🧠 PROBLEM:
Find largest element ≤ target using Binary Search

Example:
Input: 5
       1 3 5 7 9
       6
Output:
The closest item ID less than or equal to 6 is 5

-----------------------------------------------------------
✅ APPROACH (Binary Search):
- Keep track of potential answer
- If arr[mid] ≤ target → store it and go right
- Else → go left
-----------------------------------------------------------
*/

#include <stdio.h>

// Function to find floor value
int findFloor(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return arr[mid];
        }

        if (arr[mid] < target) {
            ans = arr[mid];   // Possible answer
            low = mid + 1;    // Try to find closer
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int result = findFloor(arr, n, target);

    printf("The closest item ID less than or equal to %d is %d", target, result);

    return 0;
}

/*
📝 QUICK NOTES:
- Floor = largest ≤ target
- Store answer when arr[mid] < target
- Move right to get closer value
- Time Complexity: O(log n)

===========================================================
📌 FINAL SUMMARY (IMPORTANT 🔥)
===========================================================

🔹 BINARY SEARCH PATTERNS:

1. Rotated Array → Find Pivot (Max)
   ✔ Compare mid with next
   ✔ Decide left/right

2. Floor Value
   ✔ Store potential answer
   ✔ Move right for better value

-----------------------------------------------------------
🎯 EXAM STRATEGY:

STEP 1 → Identify sorted property
STEP 2 → Apply binary search
STEP 3 → Use conditions smartly

-----------------------------------------------------------
🚀 MASTER THESE = CORE DSA QUESTIONS

===========================================================
*//*
===========================================================
📌 QUESTION 1: Find Score at kth Position (Binary Search)
===========================================================

🧠 PROBLEM:
Given sorted scores (ascending), find the score at kth rank.
(Position starts from 1)

-----------------------------------------------------------
✅ APPROACH:
- Since array is already sorted
- kth position = index (k-1)
- Binary search is NOT really needed here, but can simulate

-----------------------------------------------------------
*/

#include <stdio.h>

// Binary search to find element at index k-1
int findKth(int arr[], int n, int k) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (mid == k - 1) {
            return arr[mid];
        } else if (mid < k - 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int result = findKth(arr, n, k);
    printf("%d", result);

    return 0;
}

/*
📝 QUICK NOTES:
- Direct access → arr[k-1]
- Binary search not necessary but used for practice

===========================================================
📌 QUESTION 2: Modify Even Elements (Binary Search Concept)
===========================================================

🧠 PROBLEM:
- Given sorted array
- Multiply EVEN elements by factor M

-----------------------------------------------------------
✅ APPROACH:
- Traverse array
- If arr[i] % 2 == 0 → multiply
- Binary search is NOT required practically
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

    int m;
    scanf("%d", &m);

    // Modify even elements
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * m;
        }
    }

    // Print updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
📝 QUICK NOTES:
- Even check → arr[i] % 2 == 0
- Simple traversal problem

===========================================================
📌 QUESTION 3: Second Fastest Time (Bubble Sort)
===========================================================

🧠 PROBLEM:
Find second smallest element using Bubble Sort

-----------------------------------------------------------
✅ APPROACH:
1. Sort array in ascending order
2. Second fastest = arr[1]
3. Handle case when n < 2
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("Insufficient data to find the second-fastest time.");
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort (ascending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Second fastest
    printf("%d", arr[1]);

    return 0;
}

/*
📝 QUICK NOTES:
- Bubble sort → compare adjacent
- Smallest → arr[0]
- Second smallest → arr[1]

===========================================================
📌 FINAL SUMMARY (VERY IMPORTANT 🔥)
===========================================================

🔹 PATTERNS:

1. kth Element
   ✔ Direct index → arr[k-1]

2. Modify Elements
   ✔ Traverse + condition

3. Sorting + Selection
   ✔ Sort → pick element

-----------------------------------------------------------
🎯 EXAM STRATEGY:

STEP 1 → Identify pattern:
✔ Searching
✔ Sorting
✔ Traversal

STEP 2 → Apply logic:
✔ Index (k-1)
✔ Condition (%2)
✔ Sorting

STEP 3 → Handle edge cases

-----------------------------------------------------------
🚀 MASTER THESE = STRONG BASICS IN DSA

===========================================================
*/
/*
===========================================================
📌 QUESTION 1: Count Digit Occurrences in Array
===========================================================

🧠 WHAT IS ASKED?
- Count how many times a digit appears in ALL numbers of array

-----------------------------------------------------------
✅ APPROACH:
1. Extract digits using %10
2. Compare with target digit
3. Count occurrences
-----------------------------------------------------------
*/

// Count digit in a single number
int countDigitOccurrences(int number, int digit) {
    int count = 0;

    while (number != 0) {
        int remainder = number % 10;   // Extract last digit

        if (remainder == digit) {
            count++;
        }

        number /= 10; // Remove last digit
    }

    return count;
}

// Count digit in entire array
int countOccurrencesInArray(int arr[], int size, int digit) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        count += countDigitOccurrences(arr[i], digit);
    }

    return count;
}

/*
📝 NOTES:
✔ %10 → last digit
✔ /10 → remove digit
✔ Function reuse concept

===========================================================
📌 QUESTION 2: Count Students with GPA > 3.5
===========================================================

🧠 WHAT IS ASKED?
- Count how many GPA > 3.5

-----------------------------------------------------------
✅ APPROACH:
- Traverse array
- Check condition
-----------------------------------------------------------
*/

for (int i = 0; i < n; i++) {
    if (gpaArray[i] > 3.5) {
        eligible_count++;
    }
}

/*
📝 NOTES:
✔ Linear search pattern
✔ Condition-based counting

===========================================================
📌 QUESTION 3: Binary Search (Target Index)
===========================================================

🧠 WHAT IS ASKED?
- Find index of target in sorted array

-----------------------------------------------------------
✅ APPROACH:
1. Use left, right, mid
2. Compare arr[mid] with target
3. Move left or right
-----------------------------------------------------------
*/

while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] < target)
        left = mid + 1;

    else if (arr[mid] > target)
        right = mid - 1;

    else {
        result = mid;
        break;
    }
}

/*
📝 NOTES:
✔ Time: O(log n)
✔ Works only on sorted array

===========================================================
📌 QUESTION 4: Sort Based on Sum of Digits
===========================================================

🧠 WHAT IS ASKED?
- Sort numbers based on sum of digits

-----------------------------------------------------------
✅ APPROACH:
1. Create function → sumOfDigits()
2. Use bubble sort
3. Compare digit sums
-----------------------------------------------------------
*/

// Sum of digits
int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

/*
📝 NOTES:
✔ Custom sorting logic
✔ Compare derived values

===========================================================
📌 QUESTION 5: Sort 2D Array by Column
===========================================================

🧠 WHAT IS ASKED?
- Sort rows based on specific column

-----------------------------------------------------------
⚠️ IMPORTANT MISTAKE IN YOUR CODE:
You are swapping ONLY one column value ❌
You must swap ENTIRE ROW ✅

-----------------------------------------------------------
✅ CORRECT APPROACH:
- Swap full row instead of single element
-----------------------------------------------------------
*/

// Correct swap of full row
void bubbleSort2DArray(int arr[][10], int rows, int cols, int sortColumn) {
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows - i - 1; j++) {

            if (arr[j][sortColumn] > arr[j + 1][sortColumn]) {

                // Swap entire row
                for (int k = 0; k < cols; k++) {
                    int temp = arr[j][k];
                    arr[j][k] = arr[j + 1][k];
                    arr[j + 1][k] = temp;
                }
            }
        }
    }
}

/*
📝 NOTES:
✔ Always swap FULL row
✔ Common exam trap ❗

===========================================================
📌 FINAL SUMMARY (VERY IMPORTANT 🔥)
===========================================================

🔹 PATTERNS YOU LEARNED:

1️⃣ Digit Problems
   → %10 and /10

2️⃣ Counting Problems
   → Use counter++

3️⃣ Binary Search
   → left, right, mid

4️⃣ Custom Sorting
   → Modify comparison logic

5️⃣ 2D Sorting
   → Swap FULL rows

-----------------------------------------------------------
🎯 EXAM STRATEGY:

STEP 1 → Identify type:
✔ Searching
✔ Counting
✔ Sorting

STEP 2 → Apply logic:
✔ %10 (digits)
✔ mid formula
✔ nested loops (sorting)

STEP 3 → Avoid mistakes:
❌ Swapping partial data
✔ Always swap complete unit

-----------------------------------------------------------
🚀 MASTER THESE = FULL CONTROL ON ARRAYS + DSA

===========================================================
*/
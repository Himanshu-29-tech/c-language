/*
===========================================================
📌 QUESTION 1: Count Negative Elements in an Array
===========================================================

🧠 PROBLEM:
Count how many negative numbers exist in an array.

📥 INPUT:
n = size of array
array elements

📤 OUTPUT:
- If no negatives → "No negative elements in the array"
- Else → "Total negative elements in array X"

-----------------------------------------------------------
✅ APPROACH:
1. Take input n
2. Declare array of size n
3. Loop through array
4. Check if element < 0 → increment counter
5. Print result based on counter
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n;

    // Step 1: Input size
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    // Step 2: Input elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Count negative elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    // Step 4: Output result
    if (count == 0) {
        printf("No negative elements in the array");
    } else {
        printf("Total negative elements in array %d", count);
    }

    return 0;
}

/*
📝 QUICK NOTES:
- Use condition: arr[i] < 0
- Counter pattern problem
- Very common in exams

===========================================================
📌 QUESTION 2: Output Prediction (MCQ Type)
===========================================================

Code (corrected version):

#include <stdio.h>
int main() {
    int x[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%d", x[i]);
    }

    return 0;
}

-----------------------------------------------------------
✅ OUTPUT:
12345

-----------------------------------------------------------
📝 EXPLANATION:
- Loop runs from 0 to 4
- Prints each element without space
- So output is continuous

📝 QUICK NOTES:
- Always check loop bounds
- Check array initialization syntax

===========================================================
📌 QUESTION 3: Sum of Diagonal Elements in Matrix
===========================================================

🧠 PROBLEM:
Find sum of diagonal elements of matrix

📥 INPUT:
m, n (rows, columns)
matrix elements

📤 OUTPUT:
Print matrix and diagonal sum

-----------------------------------------------------------
✅ APPROACH:
1. Take matrix input
2. Loop i == j → main diagonal
3. Add elements
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int sum = 0;

    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    printf("Matrix\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Diagonal sum
    for (int i = 0; i < m && i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements %d", sum);

    return 0;
}

/*
📝 QUICK NOTES:
- Diagonal condition: i == j
- Works only for square OR min(m,n)

===========================================================
📌 QUESTION 4: Lower Triangular Matrix Sum (Excluding Diagonal)
===========================================================

🧠 PROBLEM:
Sum elements below diagonal (i > j)

📥 INPUT:
N (square matrix)
matrix elements

📤 OUTPUT:
sum of lower triangular elements

-----------------------------------------------------------
✅ APPROACH:
1. Loop through matrix
2. Condition: i > j
3. Add those elements
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Lower triangular sum (excluding diagonal)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) { // IMPORTANT: j < i
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}

/*
📝 QUICK NOTES:
- Lower triangular → i > j
- Upper triangular → i < j

===========================================================
📌 QUESTION 5: 2D Array Traversal Output
===========================================================

Code:
*/

#include <stdio.h>

int main() {
    int x[3][2] = {{6, 4}, {8, 7}, {1, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d", x[i][j]);
        }
    }

    return 0;
}

/*
-----------------------------------------------------------
✅ OUTPUT:
648719

-----------------------------------------------------------
📝 EXPLANATION:
Row-wise printing:
6 4 → 64
8 7 → 87
1 9 → 19
Final → 648719

📝 QUICK NOTES:
- Row-major traversal
- Default printing = continuous

===========================================================
📌 FINAL SUMMARY (VERY IMPORTANT FOR EXAMS)
===========================================================

🔹 ARRAY QUESTIONS:
- Count → use counter
- Traversal → loop from 0 to n-1

🔹 MATRIX QUESTIONS:
- Diagonal → i == j
- Lower triangular → i > j
- Upper triangular → i < j

🔹 COMMON PATTERNS:
✔ Counting problems
✔ Sum problems
✔ Traversal logic
✔ Condition-based filtering

🔹 EXAM STRATEGY:
1. Identify pattern (count / sum / traversal)
2. Write loop structure
3. Apply condition (i<j, i>j, arr[i]<0)
4. Print result

🚀 MASTER THESE = 80% ARRAY QUESTIONS DONE

===========================================================
*/









/*
===========================================================
📌 QUESTION 1: Attendance Matrix (Even/Odd Check)
===========================================================

🧠 PROBLEM:
- Input number of students (n)
- Input number of sessions (m)
- Input attendance matrix (n × m)
- Check last student’s total attendance
- Print whether it is EVEN or ODD

-----------------------------------------------------------
✅ APPROACH:
1. Take input n and m
2. Declare matrix[n][m]
3. Input attendance values
4. Calculate sum of last student's attendance
5. Check sum % 2
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, m;

    // Step 1: Input students and sessions
    scanf("%d", &n);
    scanf("%d", &m);

    int matrix[n][m];

    // Step 2: Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Calculate sum of last student (row n-1)
    int sum = 0;
    for (int j = 0; j < m; j++) {
        sum += matrix[n-1][j];
    }

    // Step 4: Check even or odd
    if (sum % 2 == 0) {
        printf("LastSession is even");
    } else {
        printf("LastSession is odd");
    }

    return 0;
}

/*
📝 QUICK NOTES:
- Last student = row (n-1)
- Even check → sum % 2 == 0
- Matrix traversal important

===========================================================
📌 QUESTION 2: Print 8 Session Pages
===========================================================

🧠 PROBLEM:
- Input 8 integers (pages read)
- Print them in same order

-----------------------------------------------------------
✅ APPROACH:
1. Declare array of size 8
2. Input values
3. Print values using loop
-----------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int arr[8];

    // Step 1: Input 8 values
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Print values
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
📝 QUICK NOTES:
- Fixed size array → arr[8]
- Simple input-output pattern
- Very common beginner question

===========================================================
📌 FINAL SUMMARY (IMPORTANT)
===========================================================

🔹 MATRIX TYPE:
- Access last row → matrix[n-1][j]
- Sum row → loop on columns

🔹 ARRAY TYPE:
- Input → loop
- Output → loop

🔹 CONDITIONS:
- Even → % 2 == 0
- Odd → % 2 != 0

🔹 EXAM STRATEGY:
1. Identify pattern (matrix / array)
2. Focus on index (n-1, i, j)
3. Apply condition
4. Print correctly

🚀 These are BASIC but HIGH-SCORING questions!

===========================================================
*/
/* =========================================================
   ARRAYS IN C – COMPLETE NOTES (BASIC → HERO)
   ========================================================= */

/* ---------------------------------------------------------
   1. INTRODUCTION TO ARRAYS
   ---------------------------------------------------------
   - Array = collection of elements of same data type
   - Stored in contiguous memory locations
   - Access using index (starts from 0)

   Example:
   int arr[5] = {10, 20, 30, 40, 50};
*/

/* ---------------------------------------------------------
   2. PASSING ARRAYS TO FUNCTIONS
   ---------------------------------------------------------
   - You can pass:
     1. Individual elements
     2. Entire array

   IMPORTANT:
   - Array is passed by reference (not copied)
*/

/* ---- Passing Individual Elements ---- */
#include<stdio.h>

void display(int a, int b)
{
    printf("%d %d", a, b);
}

int main()
{
    int arr[] = {2, 8, 4, 12};

    // Passing specific elements
    display(arr[1], arr[2]);  // Output: 8 4

    return 0;
}

/* ---- Passing Entire Array ---- */
#include<stdio.h>

float calculateSum(float num[])
{
    float sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    return sum;
}

int main()
{
    float num[] = {23.4, 55.2, 76.4, 10.0, 13.5};

    float result = calculateSum(num);

    printf("Result = %.2f", result);

    return 0;
}

/*
   NOTE:
   - Only array name is passed → calculateSum(num)
   - In function: float num[] OR float *num
*/

/* ---------------------------------------------------------
   3. BASIC OPERATIONS IN ARRAY
   ---------------------------------------------------------
   1. Traversal → Visit each element
   2. Insertion → Add element
   3. Deletion → Remove element
   4. Searching → Find element
   5. Update → Modify element
*/

/* ---------------------------------------------------------
   4. TRAVERSAL OPERATION
   ---------------------------------------------------------
   - Visiting each element once
*/

#include<stdio.h>

int main()
{
    int a[5] = {2, 3, 5, 7, 11};

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/* ---------------------------------------------------------
   5. INSERTION IN ARRAY
   ---------------------------------------------------------
   - Insert element:
     1. At beginning
     2. At end
     3. At specific position
*/

/* ---- (A) INSERT AT BEGINNING ---- */
#include<stdio.h>

int main()
{
    int arr[10], n, i, element;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert at beginning: ");
    scanf("%d", &element);

    // Shift elements right
    for(i = n; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = element;
    n++;

    printf("New array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/* ---- (B) INSERT AT END ---- */
#include<stdio.h>

int main()
{
    int arr[10], n, i, value;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &value);

    arr[n] = value;
    n++;

    printf("New array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/* ---- (C) INSERT AT SPECIFIC POSITION ---- */
#include<stdio.h>

int main()
{
    int arr[10], n, i, pos, val;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &val);

    // Shift elements
    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = val;
    n++;

    printf("New array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/* ---------------------------------------------------------
   6. IMPORTANT CONCEPTS (INTERVIEW READY)
   ---------------------------------------------------------
   - Arrays are 0-indexed
   - Fixed size (in static arrays)
   - Passing array → only base address passed
   - Time Complexity:
        Traversal → O(n)
        Insertion → O(n)
        Searching → O(n)
   - No bounds checking in C (dangerous)
*/

/* ---------------------------------------------------------
   7. QUICK SUMMARY
   ---------------------------------------------------------
   ✔ Arrays store multiple values
   ✔ Use loops for traversal
   ✔ Functions can process arrays
   ✔ Insertion requires shifting elements
   ✔ Core for DSA & problem solving
*/

/* ===================== END ===================== */
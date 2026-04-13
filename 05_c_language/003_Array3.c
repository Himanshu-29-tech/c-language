/********************************************************************
📘 ARRAYS – COMPLETE NOTES (Easy + Exam Ready)
********************************************************************/

/*
========================================================
1. TRAVERSAL (Visit each element one by one)
========================================================
👉 Definition:
Traversal means accessing/printing each element of array once.

👉 Logic:
Use loop from index 0 to n-1
*/

#include <stdio.h>

void traversal()
{
    int arr[] = {2, 3, 5, 7, 11};

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*
Output:
2 3 5 7 11
*/


/*
========================================================
2. INSERTION IN ARRAY
========================================================
👉 Definition:
Adding a new element at:
1. Beginning
2. End
3. Specific position

--------------------------------------------------------
A. Insert at Beginning
--------------------------------------------------------
*/

void insertBeginning()
{
    int arr[10] = {2, 3, 5, 7, 11};
    int n = 5;
    int value = 1;

    // Shift right
    for(int i = n; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = value;
    n++;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*
Output:
1 2 3 5 7 11
*/


/*
--------------------------------------------------------
B. Insert at End
--------------------------------------------------------
*/

void insertEnd()
{
    int arr[10] = {2, 3, 5, 7, 11};
    int n = 5;
    int value = 13;

    arr[n] = value;
    n++;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*
Output:
2 3 5 7 11 13
*/


/*
--------------------------------------------------------
C. Insert at Specific Position
--------------------------------------------------------
*/

void insertPosition()
{
    int arr[10] = {2, 3, 5, 7, 11};
    int n = 5;
    int pos = 2;
    int value = 13;

    // Shift right
    for(int i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;
    n++;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*
Example:
Input:
pos = 2, value = 13

Output:
2 3 13 5 7 11
*/


/*
========================================================
3. DELETION IN ARRAY
========================================================
👉 Definition:
Removing element from:
1. Beginning
2. End
3. Specific position

--------------------------------------------------------
A. Delete from Beginning
--------------------------------------------------------
*/

void deleteBeginning()
{
    int arr[10] = {2, 3, 5, 7, 11};
    int n = 5;

    // Shift left
    for(int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*
Output:
3 5 7 11
*/


/*
--------------------------------------------------------
B. Delete from End
--------------------------------------------------------
*/

void deleteEnd()
{
    int arr[10] = {2, 3, 5, 7, 11};
    int n = 5;

    n--;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*
Output:
2 3 5 7
*/


/*
--------------------------------------------------------
C. Delete from Specific Position
--------------------------------------------------------
*/

void deletePosition()
{
    int arr[10] = {2, 3, 5, 7, 11};
    int n = 5;
    int pos = 2;

    for(int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*
Output:
2 3 7 11
*/


/*
========================================================
4. PASSING ARRAY TO FUNCTION
========================================================
👉 Important:
Array name itself is passed (no need &arr)

Example:
*/

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}


/*
========================================================
5. BINARY SEARCH (Important for exam)
========================================================
👉 Works only on SORTED ARRAY

👉 Logic:
1. Find mid
2. Compare target with mid
3. Move left/right
*/

void binarySearch()
{
    int arr[] = {4, 10, 16, 24, 32, 46, 76, 112, 144, 182};
    int n = 10;
    int target = 46;

    int beg = 0, end = n-1, mid;

    while(beg <= end)
    {
        mid = (beg + end) / 2;

        if(arr[mid] == target)
        {
            printf("Found at index %d", mid);
            return;
        }
        else if(target < arr[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }

    printf("Not Found");
}


/*
========================================================
6. SORTING (Bubble Sort)
========================================================
👉 Definition:
Sorting means arranging elements in order.

👉 Bubble Sort:
Compare adjacent elements and swap
*/

void bubbleSort()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*
Output:
1 2 4 5 8
*/


/*
========================================================
7. BASIC OPERATIONS SUMMARY (Very Important)
========================================================

1. Traversal  → print elements
2. Insertion  → add element
3. Deletion   → remove element
4. Searching  → find element
5. Sorting    → arrange elements

========================================================
🔥 FINAL EXAM TIP:
- Always use loops correctly
- Remember shifting logic
- Binary search only for sorted array
========================================================
*/
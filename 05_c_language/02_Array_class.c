//passing arrays in function 

#include <stdio.h>

void func(int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        b[i] = b[i] + 10;
    }
}

int main()
{
    int a[10], i, n;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before function call:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    func(a, n);

    printf("\nAfter function call:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}





// linear search and binary search

// #linear search-->>

// Linear search checks each element one by one until the target is found or the list ends.

// 🧠 How it works
// Start from index 0
// Compare each element with target
// If match → return index
// If not → move to next




//example-->>>
#include <stdio.h>

int main()
{
    int a[10], i, n, data;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &data);

    for(i = 0; i < n; i++)
    {
        if(a[i] == data)
        {
            printf("Data is present at index %d\n", i);
            break;
        }
    }

    if(i == n)
    {
        printf("Data is not present\n");
    }

    return 0;
}

/*disadvantage of linear->>

Slow for large data
It checks each element one by one
If array is big → takes more time


💁Binary search -->>


Binary Search is a method to find an element by repeatedly dividing the array into halves.

⚠️ Condition: Array must be sorted


🧠 Idea (Very Simple)----->>

Instead of checking one by one:

Go to middle element
Compare with target
Decide:
Left side ❓
Right side ❓


⚙️ Algorithm
Set:
low = 0
high = n - 1
Repeat until low <= high

Find middle:

mid = (low + high) / 2
Compare:
If a[mid] == data → found
If data < a[mid] → search left → high = mid - 1
If data > a[mid] → search right → low = mid + 1

*/



#include <stdio.h>

int main()
{
    int a[10], n, i, data;
    int low, high, mid;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &data);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == data)
        {
            printf("Element found at index %d\n", mid);
            break;
        }
        else if(data < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(low > high)
    {
        printf("Element not found\n");
    }

    return 0;
}


/*
#Bubble sort-->>

Bubble Sort is a sorting technique where adjacent elements are compared and swapped if they are in the wrong order.

👉 Biggest element “bubbles up” to the end in each pass.


🧠 Idea (Simple)
Compare 1st & 2nd
Then 2nd & 3rd
Keep swapping if needed
After 1 round → largest element goes to last


Array: [5, 3, 2, 4]

Pass 1:
5 > 3 → swap → [3, 5, 2, 4]
5 > 2 → swap → [3, 2, 5, 4]
5 > 4 → swap → [3, 2, 4, 5]

👉 Largest (5) fixed at end

Pass 2:
3 > 2 → swap → [2, 3, 4, 5]
3 < 4 → no swap
Pass 3:
Already sorted 


pass = (n-1)   where n=size of array

*/









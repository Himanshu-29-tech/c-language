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








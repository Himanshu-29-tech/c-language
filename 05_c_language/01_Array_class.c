//Arrays
#include <stdio.h>

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

    printf("The elements you entered are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}




//Even number 
#include <stdio.h>

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

    printf("The even elements are:\n");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}


// largest number

#include<stdio.h>
int main()
{
    int a[10], i, n;
    
largest = a[0];

for(i = 1; i < n; i ++)
{
    if(a[i] > largest)
    {
        largest = a[i];
    }
}

printf("Largest elements is :  %d", largest);

return 0;
}

// average 

#include <stdio.h>

int main()
{
    int a[10], i, n;
    float sum = 0, avg;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}
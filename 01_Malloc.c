#include <stdio.h>
#include<stdlib.h>
int main()
{
    int*t; // t is pointer integer size
    int i, n;
    printf("how many integers: ");
    scanf("%d",&n);
    t = (int *)calloc(n,sizeof(int));
    for(i = 0; i<n; i++){
        printf("%d",*(t+i));
        
    }
     
/*
 Difference between malloc() and calloc()

1. Initialization

malloc() → does not initialize memory → contains garbage values
calloc() → initializes memory → all values are 0

2. Arguments

malloc(size) → takes 1 argument (total size in bytes)
calloc(n, size) → takes 2 arguments
n = number of elements
size = size of each element. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *t;
    int i, n, n1;

    printf("How many integers: ");
    scanf("%d", &n);

    t = (int *)malloc(n * sizeof(int));

    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &n1);

    t = (int *)realloc(t, n1 * sizeof(int));

    printf("Enter additional values:\n");
    for(i = n; i < n1; i++)
    {
        scanf("%d", &t[i]);
    }

    printf("\nAll values:\n");
    for(i = 0; i < n1; i++)
    {
        printf("%d ", t[i]);
    }

    free(t);
    return 0;
}




































char a[30];printf("enter multivalued string");
    fgets(a size of(a),stdin);
    printf("%s",a);
    
   
   

  return 0;

}

//📘 C Program: Store and Print Multiple Strings

#include <stdio.h>   // Header file for input/output functions like printf and scanf

int main()
{
    char a[68][20];   // 2D array to store strings
                      // 68 → maximum number of strings
                      // 20 → maximum characters per string (including '\0')

    int n, i;         // n = number of strings, i = loop variable

    printf("how many strings u want to store: ");
    scanf("%d", &n);  // Take number of strings from user

    printf("enter %d strings: ", n);

    // Loop to take input of n strings
    for(i = 0; i < n; i++)
        scanf("%s", a[i]);   // Stores each string in a[i]
                             // %s reads only one word (no spaces)

    printf("\nentered strings are:: ");

    // Loop to print all stored strings
    for(i = 0; i < n; i++)
        printf("%s ", a[i]); // Print each string with space

    return 0;   // End of program
}


//Program to Store and Sort Strings in Alphabetical Order



#include <stdio.h>     // for printf, scanf
#include <string.h>    // for strcmp, strcpy

int main()
{
    char a[68][20], temp[20];   // array of strings + temp for swapping
    int n, i, j;

    printf("how many strings u want to store: ");
    scanf("%d", &n);

    // clear newline left by scanf
    getchar();

    printf("enter %d strings:\n", n);

    // input strings
    for(i = 0; i < n; i++)
    {
        fgets(a[i], 20, stdin);   // safe input (can take spaces)
        
        // remove newline from fgets
        a[i][strcspn(a[i], "\n")] = '\0';
    }

    printf("\nentered strings are:\n");

    // print original strings
    for(i = 0; i < n; i++)
        puts(a[i]);

    // 🔹 Sorting strings (Bubble Sort)
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            // compare two strings
            if(strcmp(a[j], a[j+1]) > 0)
            {
                // swap strings
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
        }
    }

    printf("\nstrings after sorting:\n");

    // print sorted strings
    for(i = 0; i < n; i++)
        puts(a[i]);

    return 0;
}
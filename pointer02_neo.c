/*
PROBLEM:
- Input N temperatures
- Print:
  1. Absolute difference between consecutive days
  2. Average of adjacent days

APPROACH:
- Absolute:
    i = 0 → same value
    i > 0 → |temp[i] - temp[i-1]|

- Average:
    i = 0 or n-1 → same value
    else → (temp[i-1] + temp[i+1]) / 2

KEY POINTS:
- Use malloc()
- Handle first and last separately
- Use %.2f for output
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *temp;

    scanf("%d", &n);
    temp = (float*)malloc(n * sizeof(float));

    for(i = 0; i < n; i++)
        scanf("%f", &temp[i]);

    // Absolute difference
    for(i = 0; i < n; i++) {
        if(i == 0) printf("%.2f ", temp[i]);
        else {
            float d = temp[i] - temp[i-1];
            if(d < 0) d = -d;
            printf("%.2f ", d);
        }
    }

    printf("\n");

    // Adjacent average
    for(i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            printf("%.2f ", temp[i]);
        else
            printf("%.2f ", (temp[i-1] + temp[i+1]) / 2.0);
    }

    free(temp);
}/*
PROBLEM:
- Merge two sorted arrays into one sorted array

APPROACH:
- Use 3 pointers:
    i → array1
    j → array2
    k → result
- Compare elements and insert smaller
- Add remaining elements

KEY POINTS:
- No sorting required
- Time complexity = O(n)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j=0, k=0;

    scanf("%d", &n);

    int *a = (int*)malloc(n*sizeof(int));
    int *b = (int*)malloc(n*sizeof(int));
    int *c = (int*)malloc(2*n*sizeof(int));

    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) scanf("%d",&b[i]);

    i = 0;

    while(i<n && j<n) {
        if(a[i] < b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }

    while(i<n) c[k++] = a[i++];
    while(j<n) c[k++] = b[j++];

    for(i=0;i<2*n;i++) printf("%d ", c[i]);

    free(a); free(b); free(c);
}/*
PROBLEM:
- Find average of numbers divisible by given divisor

APPROACH:
- Use calloc()
- Check: arr[i] % divisor == 0
- Track sum and count
- If count == 0 → print "None"

KEY POINTS:
- Use %.1lf for output
- Cast sum to double
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, d;

    scanf("%d", &n);
    int *arr = (int*)calloc(n, sizeof(int));

    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&d);

    int sum=0, count=0;

    for(i=0;i<n;i++) {
        if(arr[i] % d == 0) {
            sum += arr[i];
            count++;
        }
    }

    if(count == 0)
        printf("None");
    else
        printf("%.1lf", (double)sum/count);

    free(arr);
}/*
PROBLEM:
- Print divisors of each element
- Print total sum of all divisors

APPROACH:
- Loop j from 1 to number
- If divisible → print and add to sum

FORMAT RULE (VERY IMPORTANT):
- No spaces:
    4-124 (correct)
    4 - 1 2 4 (wrong)

KEY POINTS:
- Use calloc()
- Strict output format
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, i, j;

    scanf("%d", &m);
    int *arr = (int*)calloc(m, sizeof(int));

    for(i=0;i<m;i++) scanf("%d",&arr[i]);

    int total = 0;

    for(i=0;i<m;i++) {
        printf("%d-", arr[i]);

        for(j=1;j<=arr[i];j++) {
            if(arr[i] % j == 0) {
                printf("%d");
                total += j;
            }
        }
        printf("\n");
    }

    printf("Sum of divisors: %d", total);

    free(arr);
}
#include <stdio.h>
#include <stdlib.h>

/*
==========================================================
QUESTION 1: Combine Two Arrays using malloc & realloc
==========================================================

PROBLEM:
- Given two arrays of size N
- Resize first array to 2N using realloc
- Append second array into first array
- Print combined array

----------------------------------------------------------
APPROACH:
1. Allocate arr1 and arr2 using malloc
2. Input both arrays
3. Use realloc to expand arr1 to size 2N
4. Copy arr2 elements into arr1
5. Print 2N elements

----------------------------------------------------------
KEY POINT:
- arr1[n + i] = arr2[i]

==========================================================
*/

void combineArrays() {
    int n, i;

    scanf("%d", &n);

    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    for(i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    // Resize arr1
    arr1 = (int *)realloc(arr1, 2 * n * sizeof(int));

    // Append arr2
    for(i = 0; i < n; i++)
        arr1[n + i] = arr2[i];

    // Print result
    for(i = 0; i < 2 * n; i++) {
        printf("%d", arr1[i]);
        if(i != 2*n - 1) printf(" ");
    }

    printf("\n");

    free(arr1);
    free(arr2);
}


/*
==========================================================
QUESTION 2: Delete Elements using malloc & realloc
==========================================================

PROBLEM:
- Remove elements from arr1 that are present in arr2
- Resize arr1 after deletion
- Print updated array

----------------------------------------------------------
APPROACH:
1. Input arr1 and arr2
2. For each element in arr1:
   - Check if it exists in arr2
3. If NOT found → keep it
4. Use overwrite method
5. Resize using realloc
6. Print new array

----------------------------------------------------------
KEY POINT:
- arr1[newSize++] = arr1[i]

==========================================================
*/

void deleteElements() {
    int N, M, i, j, found;

    scanf("%d", &N);
    int *arr1 = (int *)malloc(N * sizeof(int));

    for(i = 0; i < N; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &M);
    int *arr2 = (int *)malloc(M * sizeof(int));

    for(i = 0; i < M; i++)
        scanf("%d", &arr2[i]);

    int newSize = 0;

    for(i = 0; i < N; i++) {
        found = 0;

        for(j = 0; j < M; j++) {
            if(arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            arr1[newSize++] = arr1[i];
        }
    }

    // Resize array
    arr1 = (int *)realloc(arr1, newSize * sizeof(int));

    // Print result
    for(i = 0; i < newSize; i++) {
        printf("%d", arr1[i]);
        if(i != newSize - 1) printf(" ");
    }

    printf("\n");

    free(arr1);
    free(arr2);
}


/*
==========================================================
MAIN FUNCTION (FOR TESTING BOTH)
==========================================================
*/

int main() {
    // Call any one function based on question

    // combineArrays();
    deleteElements();

    return 0;
}


/*
==========================================================
QUICK RECAP
==========================================================

✔ malloc → allocate memory
✔ realloc → resize memory
✔ free → release memory

✔ Q1 → Expand + Append
✔ Q2 → Filter + Shrink

✔ Always:
- Print correct size
- Avoid extra spaces
- Assign realloc back to pointer

==========================================================
*//*
MEMORY:
- malloc → uninitialized
- calloc → initialized to 0

COMMON LOGIC:
- Absolute → if(x < 0) x = -x
- Average → (double)sum/count
- Divisor → n % j == 0

MISTAKES:
- Wrong formatting (spaces/newlines)
- Not handling edge cases
- Wrong loop limits
- Missing free()

EXAM TIP:
- Write logic first
- Then handle formatting carefully
*/

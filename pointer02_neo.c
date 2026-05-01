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
}/*
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

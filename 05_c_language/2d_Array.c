// Program to Perform Addition of Two Matrices

#include<stdio.h>

int main()
{
    int a[5][5], b[5][5], c[5][5];
    int i, j, r1, c1, r2, c2;

    printf("Enter order of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter order of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if addition is possible
    if(r1 == r2 && c1 == c2)
    {
        printf("Enter %d elements of first matrix:\n", r1 * c1);
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter %d elements of second matrix:\n", r2 * c2);
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        // Matrix addition
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("Resultant matrix after addition:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition not possible!\n");
    }

    return 0;
}
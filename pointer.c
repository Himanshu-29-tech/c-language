#include <stdio.h>
#include <stdlib.h>

/*
==========================================================
QUESTION 1: Candies Distribution
==========================================================

PROBLEM UNDERSTANDING:
Mary has total m candies. She eats n candies and distributes
the remaining equally among x friends.

GOAL:
Find how many candies each friend gets using pointers.

----------------------------------------------------------
EXAMPLE:
Input:
10 2 4

Output:
2

----------------------------------------------------------
APPROACH:
1. Read m, n, x
2. remaining = m - n
3. Use pointer to access remaining
4. Divide remaining by x

----------------------------------------------------------
POINTER CONCEPT:
- Store address using &
- Access value using *ptr

----------------------------------------------------------
IMPORTANT POINTS:
✔ Avoid division by zero
✔ Always dereference pointer (*ptr)

----------------------------------------------------------
QUICK RECAP:
remaining → pointer → divide → print

==========================================================
*/

void q1(){
    int m,n,x,remaining;
    int *ptr;

    scanf("%d%d%d",&m,&n,&x);

    remaining = m - n;
    ptr = &remaining;

    printf("%d\n", (*ptr)/x);
}

/*
==========================================================
QUESTION 2: Boys and Girls Ratio
==========================================================

PROBLEM:
Given total students and ratio (boys:girls), find count.

----------------------------------------------------------
EXAMPLE:
Input:
60
2:3

Output:
Girls: 36
Boys: 24

----------------------------------------------------------
APPROACH:
girls = (n * girlsRatio) / (boys + girls)
boys = n - girls

----------------------------------------------------------
POINTER CONCEPT:
Use pointers to access final values

----------------------------------------------------------
IMPORTANT:
✔ Correct formula is important
✔ Ratio must be read properly

----------------------------------------------------------
QUICK RECAP:
ratio → formula → pointer → print

==========================================================
*/

void q2(){
    int n,b,g,girls,boys;

    scanf("%d",&n);
    scanf("%d:%d",&b,&g);

    girls = (n*g)/(b+g);
    boys = n - girls;

    int *pg = &girls;
    int *pb = &boys;

    printf("The number of girls in the class is: %d\n", *pg);
    printf("The number of boys in the class is: %d\n", *pb);
}

/*
==========================================================
QUESTION 3: Numerator Transformation
==========================================================

PROBLEM:
Halve numerator and double denominator.

----------------------------------------------------------
EXAMPLE:
Input:
10 5

Output:
Numerator: 5
Denominator: 10

----------------------------------------------------------
APPROACH:
x = x/2
y = y*2

----------------------------------------------------------
POINTER:
Modify values using pointer

----------------------------------------------------------
QUICK RECAP:
half → double → print

==========================================================
*/

void q3(){
    int x,y;
    int *px=&x,*py=&y;

    scanf("%d%d",&x,&y);

    *px = *px / 2;
    *py = *py * 2;

    printf("Numerator: %d\n", *px);
    printf("Denominator: %d\n", *py);
}

/*
==========================================================
QUESTION 4: Modify x and y
==========================================================

PROBLEM:
x = x + 3
y = y - 2
x = x * y

----------------------------------------------------------
APPROACH:
Update values then multiply

----------------------------------------------------------
POINTER:
Modify directly using *ptr

----------------------------------------------------------
QUICK RECAP:
modify → multiply → update

==========================================================
*/

void q4(){
    int x,y;
    int *px=&x,*py=&y;

    scanf("%d%d",&x,&y);

    *px += 3;
    *py -= 2;

    *px = (*px) * (*py);

    printf("x = %d\n", *px);
    printf("y = %d\n", *py);
}

/*
==========================================================
QUESTION 5: Cake Consumption
==========================================================

PROBLEM:
Find cake eaten using fraction.

----------------------------------------------------------
EXAMPLE:
Input:
2.0
0.5

Output:
1.00

----------------------------------------------------------
APPROACH:
Multiply total cake with fraction

----------------------------------------------------------
POINTER:
Use pointer to access values

----------------------------------------------------------
QUICK RECAP:
multiply → print

==========================================================
*/

void q5(){
    double n,m;
    double *pn=&n,*pm=&m;

    scanf("%lf",&n);
    scanf("%lf",&m);

    printf("%.2lf\n", (*pn)*(*pm));
}

/*
==========================================================
QUESTION 6: Absolute Deviation
==========================================================

PROBLEM:
Find |value - mean|

----------------------------------------------------------
APPROACH:
1. Calculate mean
2. Compute absolute deviation

----------------------------------------------------------
POINTER:
Use pointer for dynamic array

----------------------------------------------------------
QUICK RECAP:
mean → deviation → absolute

==========================================================
*/

void q6(){
    int n;
    scanf("%d",&n);

    int *arr = malloc(n*sizeof(int));

    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    float sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];

    float mean = sum/n;

    for(int i=0;i<n;i++){
        float d = arr[i] - mean;
        if(d<0) d = -d;
        printf("%.2f ", d);
    }
}

/*
==========================================================
QUESTION 7: Permutations
==========================================================

PROBLEM:
nPr = n! / (n-r)!

----------------------------------------------------------
APPROACH:
Use factorial function

----------------------------------------------------------
QUICK RECAP:
factorial → divide

==========================================================
*/

long long fact(int n){
    long long f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

void q7(){
    int n,r;
    scanf("%d%d",&n,&r);

    printf("%lld\n", fact(n)/fact(n-r));
}

/*
==========================================================
QUESTION 8: Pronic Number
==========================================================

PROBLEM:
Check if number = i*(i+1)

----------------------------------------------------------
APPROACH:
Loop and check condition

----------------------------------------------------------
QUICK RECAP:
check consecutive product

==========================================================
*/

void q8(){
    int n,flag=0;
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        if(i*(i+1)==n){
            flag=1;
            break;
        }
    }

    if(flag)
        printf("%d is a pronic number.\n", n);
    else
        printf("%d is not a pronic number.\n", n);
}

/*
==========================================================
QUESTION 9: Alternate Signs
==========================================================

PROBLEM:
Even index positive, odd negative

----------------------------------------------------------
APPROACH:
Check index and modify sign

----------------------------------------------------------
QUICK RECAP:
index → sign change

==========================================================
*/

void q9(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int *ptr = arr;

    for(int i=0;i<n;i++) scanf("%d", ptr+i);

    for(int i=0;i<n;i++){
        if(i%2==0 && *(ptr+i)<0) *(ptr+i)*=-1;
        if(i%2==1 && *(ptr+i)>0) *(ptr+i)*=-1;
    }

    for(int i=0;i<n;i++) printf("%d ", *(ptr+i));
}

/*
==========================================================
QUESTION 10: Transaction Sign Change
==========================================================

PROBLEM:
Use second array to assign sign

----------------------------------------------------------
APPROACH:
If sign[i] == 1 → make negative

----------------------------------------------------------
QUICK RECAP:
check → negate → print

==========================================================
*/

void q10(){
    int n;
    scanf("%d",&n);

    int arr[n], sign[n];
    int *p1=arr,*p2=sign;

    for(int i=0;i<n;i++) scanf("%d",p1+i);
    for(int i=0;i<n;i++) scanf("%d",p2+i);

    for(int i=0;i<n;i++){
        if(*(p2+i)==1)
            *(p1+i) = -(*(p1+i));
    }

    for(int i=0;i<n;i++){
        printf("%d", *(p1+i));
        if(i!=n-1) printf(" ");
    }
}

/*
==========================================================
MAIN FUNCTION
==========================================================
Uncomment any function to test
==========================================================
*/

int main(){
    // q1();
    // q2();
    // q3();
    // q4();
    // q5();
    // q6();
    // q7();
    // q8();
    // q9();
    // q10();
    return 0;
}

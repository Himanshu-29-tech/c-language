#include <stdio.h>

int main() 
{
    printf("Helo Himanshu\n");
    printf("Hello Rahul"); // for next line using \n. -->> but itself never print


    printf("nn\n\nnn\n");
    printf("nn/n/nnn/n");

    int x; // variable declaration
    x = 5; // putting the variable value
    printf("%d\n",x); // printing the variable

    x = 9;
    printf("%d",x); // now value of new variable will be print that is 9.

    x = x + 6;
    printf("%d",x);


    x = x - 20;
    printf("%d",x);  


    // Airthmatic operations on in data type
    int x = 5;
    int y = 2;
    printf("%d\n",x + y);
    printf("%d\n", x - y);

    printf("%d\n", x * y);

    printf("%d\n",x/y);

int z = x + y;
printf("%d",z);

// %d --->> for integer
// %f --->> for float
    float x = 3.14;
    printf("%f",x);

/* 5 / 2 --->> integer ->> 2
    float z = 5/2; 
     ---->> float z = 2;

    5.0/2 --->> 2.5 ---->>when you devide float to integer ---->> it gives float value
    5/2.0 --->> 2.5



        */













    return 0;
}

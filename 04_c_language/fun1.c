#include <stdio.h>

int add(int s, int t);   // Function prototype

int main() {
    int a, b, c;

    printf("Enter 2 integer values: ");
    scanf("%d %d", &a, &b);

    c = add(a, b);

    printf("Sum = %d", c);

    return 0;
}

int add(int s, int t) {
    int g;
    g = s + t;   // semicolon added
    return g;
}

// int->> we don't need integer data type 
// float-->> we need float data value


// # for float value



#include <stdio.h>

float add(float s, float t);   // Function prototype

int main() {
    float a, b, c;

    printf("Enter 2 float values: ");
    scanf("%f %f", &a, &b);

    c = add(a, b);

    printf("Sum = %.2f", c);

    return 0;
}

float add(float s, float t) {
    float g;
    g = s + t;
    return g;
}


// No Arguments, No Return Value
// Arguments Passed, No Return Value
// No Arguments, But Return Value
// Arguments Passed + Return Value
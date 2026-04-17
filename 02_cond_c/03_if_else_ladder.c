 //  to execute it type on trminal follow these commond

 //cd "02_c language" && gcc 03_if_else_ladder.c -o ladder && ./ladder

#include <stdio.h>

int main() {
    int age;
    printf("welcome to ARTO.\nplease enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 70) {
        printf("You are eligible for a license.\n");
    } 
    else if (age > 70) {   // you can write many else if
        printf("You are senior, you cannot apply anymore.\n");
    } 
    else {
        printf("You are too young, please apply after you are 18.\n");
    }

    printf("Your age is: %d\n", age);
    return 0;
}

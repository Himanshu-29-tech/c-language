#include<stdio.h>

int main(){
  int age;
  printf("Welcome to ARTO.\nplease enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are eligible for a licesnse.\n");
  } else { //  write else immediately after ending of if
    printf("You are too young, please apply after you are 18.");
  }
 printf("Your age is: %d", age);
 return 0;
  
}
//+++++++++if-else ladder ++++++

// to run it on terminal use this commond


// gcc 01_c_language/06_problem1.c -o problem1 && ./problem1


#include <stdio.h>

int main(){
  int num1,num2,sum;
  
  //prompt the user for two numbers
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d",&num2);

  //calculate the sum
  sum = num1 + num2;


  //Display the result
  printf("The sum of %d and %d is: %d\n",num1,num2,sum);
  return 0; 
}

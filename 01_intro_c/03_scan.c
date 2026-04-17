#include<stdio.h>

int main(){
  int age;
  printf("print enteer your age: ");
  scanf("%d",&age);// scan is used for reading formating input

  //Syntax: scanf("format specifier", &variable);

  printf("Your age is : %d" , age);
  return 0;
}
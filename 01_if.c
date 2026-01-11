 #include <stdio.h >
 

 int main(){
  int age;
  printf("Welcome to Arto.\n please enter your age: ");
  scanf("%d", &age);


 if (age >= 18) {
  printf("you are eligible for a license.");
}


  printf("your age is: %d",age);

  return 0;
 }


  //+++++++++++ Truthy vs falsy++++++++

  if (1) {
    console.log("the value is truthy");  
  }
  else {
    console.log("the value is falsy"); // 0 and null is consider as falsy
  }






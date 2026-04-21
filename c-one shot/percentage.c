#include<stdio.h>
int main(){
    float m1, m2, m3,m4,m5;
    float percentage;

    printf("Phyics:");
    scanf("%f",&m1);

    printf("Chemistry:");
    scanf("%f",&m2);

    printf("Maths:");
    scanf("%f",&m3);

    printf("SocialScience:");
    scanf("%f",&m4);

    printf("English:");
    scanf("%f",&m5);

percentage = (m1+m2+m3+m4+m5)/5;

printf("Studnet Your percentage is: %.2f%%\n",percentage);

if(percentage >90){
    printf("Student we are proud of you");
}

else {
    printf("KEEP HARD WORKING");
}

    return 0;
}
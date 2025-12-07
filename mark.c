// c_marks arre 30% and genAI_marks are 70% weightage


#include<stdio.h>
int main()

{
    float c_marks,genAI_marks,sum;
    printf("enter the marks of subjects \n");
    scanf("%f%f",&c_marks,&genAI_marks);
    sum = (30.0/100.0)*c_marks+(70.0/100.0)*genAI_marks;
    printf("the sum of %.2f and %.2f is= %.2f",c_marks,genAI_marks,sum);
    return 0;
}

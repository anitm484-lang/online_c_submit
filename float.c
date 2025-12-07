// wap to convert float into integer  so when we enter the number you must enter the number like 3.0154
#include<stdio.h>
int main()
{
    float f;
    printf("enter any number float:");
    scanf("%f",&f);
    int e = (int)f;
    printf("the character is %.2f ASCII is %d",f,e);
    return 0 ;
}

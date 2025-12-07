// wap to find that is it indian citizen or not if yes then they are eligible for vote or no
#include<stdio.h>
int main(){
    int citizen;
    int age;
    printf("enter your citizen:");
    scanf("%d",&citizen);
    printf("enter your age:");
    scanf("%d",&age);
    if(citizen == 1)
    {
        printf("you are indian citizen \n ");
        if(age>=18)
        {
            printf("you are eligible for vote:");
        }
        else
        {
            printf("you are not eligible for vote:");
        }
    }
    else
    printf("you are not indian citizen");
 return 0;
}

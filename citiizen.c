#include<stdio.h>
int main(){
    char citizen;
    int age;
    printf("enter your citizen:");
    scanf("%c",&citizen);
     if(citizen == 'i'  || citizen == 'I')
     {
    printf("enter your age:");
    scanf("%d",&age);
      
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

# include<stdio.h>
int main()
{ 
     int  age;
     char c;
     printf("enter your character:");
     scanf("%c",&c);
     printf("enter your age:");
     scanf("%d",&age);
     if(c==1 || c== 0)
     {
         printf("great! you are indian citizen");
         
         
           
             if(age>=18)
             {
             printf(" congratulations! you are eligible for vote");
             }
             else {
                 printf("sry! you are not eligible for vote");
             }
         
     }
     else 
     
         printf("sry! you are not indian citizen");
     
     return 0;
     
}

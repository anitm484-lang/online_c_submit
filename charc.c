 // write a program  correct 
#include<stdio.h>
int main()
{
    char c;
    printf("enter the any character:");
    scanf("%c",&c);
    int a = (int)c;
    printf("the character is :%c ASCII value is %d",c,a);
    return 0;
}
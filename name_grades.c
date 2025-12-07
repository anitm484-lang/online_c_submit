// wap to print the name with white space.
#include<stdio.h>
int main()       // gets always work with space or without space
{               // gets is used to input and puts is for print
    
    char name[100];
    printf("enter the name:");
    fgets(name,100,stdin);
    printf("your name is:%s",name);   // this is for print.
    puts(name);   // puts is not necessary because it also give the print that we alredy do before that in top so.
    return 0;
}

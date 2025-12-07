// here about to get full name with space and also getting age.
#include<stdio.h>
int main()
{
    int age;
    char name[100];
    printf("enter your name:");
    fgets(name,50,stdin);
    printf("enter the age:");
    scanf("%d",&age);
    printf("name:%s",name);
    printf("age:%d",age);
    return 0;
}

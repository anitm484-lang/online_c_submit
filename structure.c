 // wap a program to take input from user then print  your name,age,address,number.
#include<stdio.h>
    struct student 
    {
        char name[45];
        int age;
        char address[50];
        unsigned long number[45];
    };
    int main()
    {
        struct student std;
        printf("enter the name:");
        fgets(std.name,40,stdin);
        printf("enter your age:");
        scanf("%d",&std.age);
        printf("enter your address:");
        scanf("%s",std.address);
        printf("enter the number:");
        scanf("%lu",std.number);
        printf("your name is:%s",std.name);
        printf("your age is:%d\n",std.age);
        printf("your address is:%s\n",std.address);
        printf("your number is%lu\n",std.number);
        return 0;
    }

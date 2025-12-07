// write  a program to print name,age,address,grade taken input from user.
#include<stdio.h>
struct student{
	char name[40];
	int age;
	int grade;
	char address[45];
	
};
int main()
{

struct student std;
printf("enter your name:");
fgets(std.name,sizeof(std.name),stdin);
printf("enter your age:");
scanf("%d",&std.age);
printf("enter your grade:");
scanf("%d",&std.grade);
printf("enter your address:");
scanf("%s",std.address);
printf("your name is:%s",std.name);
printf("your age:%d\n",std.age);
printf("your grade:%d\n",std.grade);
printf("your address:%s\n",std.address);
return 0;
}

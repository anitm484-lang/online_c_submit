//wap to find print the name,age,grade,addres by assign value.
#include<stdio.h>
struct student{
	char name[40];
	int age;
	int grade;
	char address[45];
	
};
int main()
{

struct student std={"anit mandal",19,12+1,"Nepal"
};

printf("your name is:%s\n",std.name);
printf("your age:%d\n",std.age);
printf("your grade:%d\n  ",std.grade);
printf("your address:%s\n",std.address);
return 0;
}

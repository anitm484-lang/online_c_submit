// wap tha define a structure to store the record of an employee with id,name,sex and salary fields. Read a record of an employee from user and display the record.
#include<stdio.h>
struct employee{
	int id;
	char name[100];
	char sex[30];
	float salary;
};
int main()
{
	struct employee emp;
	printf("enter your id:");
	scanf("%d",&emp.id);
	getchar();
	printf("enter your name:");
	fgets(emp.name,sizeof(emp.name),stdin);
	printf("enter your sex:");
	fgets(emp.sex,sizeof(emp.sex),stdin);
	printf("enter your salary:");
	scanf("%f",&emp.salary);
	printf("\n");
	printf("employee id:%d\n",emp.id);
	printf("employee name:%s",emp.name);
	printf("employee sex:%s",emp.sex);
	printf("employee salary:%.3f",emp.salary);
	return 0;
}

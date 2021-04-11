/*WAP to define a structure of an employee record, load info of employee and display them.*/
#include<stdio.h>
struct employee
{
	int empid;
	char empnm[10];
	int sal;
};
typedef struct employee emp;
int main()
{
	emp e1;
	printf("Enter employee id, name and salary: ");
	scanf("%d%s%d",&e1.empid,e1.empnm,&e1.sal);
	printf("Employee ID: %d \nEmployee Name: %s \nEmployee Salary: %d",e1.empid,e1.empnm,e1.sal);
	return 0;
}


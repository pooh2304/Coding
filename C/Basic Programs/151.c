/*WAP to enter and show students info such as name,roll no and date of birth using nested structure.*/
#include<stdio.h>
struct dob
{
	int dd,mm,yy;
};
typedef struct dob date;
struct student
{
	char name[10];
	int roll;
	date d;
};
typedef struct student stud;
int main()
{
	stud s;
	printf("Name:");
	scanf("%s",&s.name);
	printf("Roll:");
	scanf("%d",&s.roll);
	printf("DOB (DD-MM-YYYY):");
	scanf("%d%d%d",&s.d.dd,&s.d.mm,&s.d.yy);
	printf("Name: %s\n",s.name);
	printf("Roll No.: %d\n",s.roll);
	printf("DOB: %d/%d/%d",s.d.dd,s.d.mm,s.d.yy);
	return 0;
	
}

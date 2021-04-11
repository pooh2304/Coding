/*WAP to input marks of five subjects, calculate percentage and grade according to given conditions:
If percentage>=90%, Grade=A
If percentage>=80%, Grade=B
If percentage>=70%, Grade=C
If percentage>=60%, Grade=D
If percentage>=40%, Grade=E
If percentage<40%, Grade=F
*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float per;
	printf("Enter marks of 5 subjects:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	per=(float)(a+b+c+d+e)/5;
	printf("Percentage=%.2f\n",per);
	if(per>=90)
		printf("Grade A");
	else if(per>=80&&per<90)
		printf("Grade B");
	else if(per>=70&&per<80)
		printf("Grade C");
	else if(per>=60&&per<70)
		printf("Grade D");	
	else if(per>=40&&per<60)
		printf("Grade E");
	else
		printf("Grade F");
	return 0;
}

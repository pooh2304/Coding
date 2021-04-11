/*WAP to input basic salary of an employee and calculate gross salary according to given conditions.
  Basic Salary<10000 :			Basic Salary>=10000 :
	DA=80%							DA=90%
	HRA=20%							HRA=30%
*/
#include<stdio.h>
int main()
{
	float bs,gs,da,hra;
	printf("Enter basic salary:");
	scanf("%f",&bs);
	if(bs<10000)
	{
		da=bs*0.8;
		hra=bs*0.2;
	}
	else if(bs>=10000)
	{
		da=bs*0.9;
		hra=bs*0.3;
	}
	gs=bs+da+hra;	
	printf("Gross Salary:%f",gs);
	return 0;
}

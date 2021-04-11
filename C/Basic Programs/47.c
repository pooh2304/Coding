/*WAP to check whether a number is armstrong number or not.*/
#include<stdio.h>
int main()
{
	int n,t,num,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		t=n%10;
		sum=sum+(t*t*t);
		n=n/10;
	}
	if(sum==num)
		printf("Armstrong");
	else
		printf("Not Armstrong");
	return 0;
}

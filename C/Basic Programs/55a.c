/*WAP to find LCM(Least Common Multiple) of two numbers.*/
#include<stdio.h>
int main()
{
	int a,b,min,hcf,lcm,i;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	min=a<b?a:b;
	for(i=min;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
			break;
		}
	}
	lcm=(a*b)/hcf;
	printf("LCM of %d and %d is %d",a,b,lcm);
	return 0;
}

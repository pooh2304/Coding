/*WAP to find LCM(Least Common Multiple) of two numbers without finding HCF.*/
#include<stdio.h>
int main()
{
	int a,b,max,mul,lcm,i;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	max=a>b?a:b;
	mul=a*b;
	for(i=max;i<=mul;i+=max)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;
			break;
		}
	}
	printf("LCM of %d and %d is %d",a,b,lcm);
	return 0;
}

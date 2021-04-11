/*WAP to find HCF(GCD) of two numbers with less time complexity.*/
#include<stdio.h>
int main()
{
	int a,b,min,hcf,i;
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
	printf("HCF of %d and %d is %d",a,b,hcf);
	return 0;
}

/*WAP to check whether a number is perfect number or not.*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("Perfect Number");
	else
		printf("Not a Perfect Number");
	return 0;
}

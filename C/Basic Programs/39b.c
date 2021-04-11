/*WAP to check whether a number is prime number or not.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,c=0;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Neither prime nor Composite");
		exit(0);
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
		printf("Prime");
	else
		printf("Composite");
	return 0;
}

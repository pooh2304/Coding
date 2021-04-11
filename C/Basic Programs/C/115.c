/*WAF to check if a number is prime or not.*/
#include<stdio.h>
int isPrime(int n)
{
	int c=0,i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
			break;
		}
	}
	return c;
}
int main()
{
	int n,x;
	printf("Enter an integer:");
	scanf("%d",&n);
	x=isPrime(n);
	if(x==0)
		printf("Prime Number");
	else
		printf("Not a Prime Number");
	return 0;	
}

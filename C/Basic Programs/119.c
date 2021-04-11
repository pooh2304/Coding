/*WAP to print twin primes less than a given number.*/
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
void twinPrimes(int n)
{
	int i;
	printf("Twin Primes until %d:\n",n);
	for(i=3;i<=n-2;i+=2)
	{
		if(isPrime(i)==0 && isPrime(i+2)==0)
			printf("%d  %d\n",i,i+2);	
	}
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	twinPrimes(n);
	return 0;
}

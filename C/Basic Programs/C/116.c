/*WAF to print all the prime factors of a given number.*/
#include<stdio.h>
void primeFactors(int n)
{
	int i;
	while(n%2==0)
	{
		printf("2\t");
		n/=2;
	}
	for(i=3;i*i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d\t",i);
			n/=i;
		}
	}
	if(n>2)
		printf("%d\t",n);
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("The prime factors of %d are:\n",num);
	primeFactors(num);
	return 0;
}

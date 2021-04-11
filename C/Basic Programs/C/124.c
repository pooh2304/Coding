/*WAP to find sum of first ‘n’ natural numbers using recursion.*/
#include<stdio.h>
int sum(int n)
{
	if(n==1)
		return 1;
	else
		return (n+sum(n-1));
}
int main()
{
	int n,s;
	printf("Enter n: ");
	scanf("%d",&n);
	s=sum(n);
	printf("Sum of %d natural numbers are: %d",n,s);
	return 0;
}

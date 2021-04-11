/*WAP to calculate factorial of a given number.*/
#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		f=f*i;
	printf("Factorial of %d=%d",n,f);
	return 0;
}

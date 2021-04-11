/*WAP to print nth Fibonacci term.*/
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c=0,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{	
		a=b;
		b=c;
		c=a+b;	
	}
	printf("%d",c);
	return 0;
}

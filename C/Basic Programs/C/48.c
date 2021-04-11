/*WAP to print Fibonacci series up to n terms.*/
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c=0,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",c);	
		a=b;
		b=c;
		c=a+b;	
	}
	return 0;
}

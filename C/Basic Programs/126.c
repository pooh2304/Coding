/*Find nth Fibonacci term using recursive function.*/
#include<stdio.h>
int fibonacci(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
	int n,z;
	printf("Enter n: ");
	scanf("%d",&n);
	z=fibonacci(n);
	printf("%d term of Fibonacci Series : %d",n,z);
	return 0;
}

/*WAP to find maximum between two numbers.*/
#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
		max=a;
	else
		max=b;
	printf("%d is maximum",max);
	return 0;
}

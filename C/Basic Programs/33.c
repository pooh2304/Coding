/*Multiplication of 2 numbers without using * operator.*/
#include<stdio.h>
int main()
{
	int i,a,b,mult=0;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	{
		mult+=a;
	}
	printf("Product=%d",mult);
	return 0;
}

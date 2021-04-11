/*WAP to enter two numbers and swap it using bitwise operator.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	printf("\nEnter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After Swapping:\na=%d\nb=%d",a,b);
	return 0;
} 

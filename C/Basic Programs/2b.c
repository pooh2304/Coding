/*WAP to enter two numbers and swap it without using third variable.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	printf("\nEnter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	a=b-a;
	b=b-a;
	a=b+a;
	printf("After Swapping:\na=%d\nb=%d",a,b);
	return 0;
} 

/*WAP to enter two numbers and swap it.*/
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers:");
	printf("\nEnter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping:\na=%d\nb=%d",a,b);
	return 0;
}

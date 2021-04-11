/*WARF to count number of digits in an integer number.*/
#include<stdio.h>
int digits(int n)
{
	if(n<=9)
		return 1;
	else
		return (1+digits(n/10));
}
int main()
{
	int num,z;
	printf("Enter a number to count its digits: ");
	scanf("%d",&num);
	z=digits(num);
	printf("No. of digits: %d",z);
	return 0;
}

/*WAF to count no. of digits of a number.*/
#include<stdio.h>
int digitCount(int n)
{
	int c=0;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	return c;
}
int main()
{
	int num,x;
	printf("Enter a number to count its digits: ");
	scanf("%d",&num);
	x=digitCount(num);
	printf("No. of digits: %d",x);
	return 0;
}

/*WAF that gives the minimum number that will be added to it to get a perfect square.*/
#include<stdio.h>
#include<math.h>
int minNumberRequired(int n)
{
	int x,min;
	x=ceil(sqrt(n));
	min=x*x-n;
	return min;
}
int main()
{
	int num,min;
	printf("Enter a number to make it a perfect square: ");
	scanf("%d",&num);
	min=minNumberRequired(num);
	printf("Minimum number to add to make it a perfect square: %d",min);
	return 0;
}

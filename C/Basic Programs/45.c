/*WAP to enter a number and print its reverse.*/
#include<stdio.h>
int main()
{
	int n,t,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
	}
	printf("Reverse=%d",rev);
	return 0;
}

/*WAP to check whether a number is special number or not.*/
#include<stdio.h>
int main()
{
	int n,r,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	r=n%10;
	temp=r*r*r;
	if(temp==n)
		printf("Special Number");
	else
		printf("Not a Special Number");
	return 0;
}

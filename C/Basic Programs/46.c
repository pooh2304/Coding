/*WAP to check whether a number is palindrome or not.*/
#include<stdio.h>
int main()
{
	int n,t,rev=0,num;
	printf("Enter a number:");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
	}
	if(rev==num)
		printf("Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}

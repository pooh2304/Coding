/*WAP to find maximum between three numbers using Nested if-else.*/
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			max=a;
		else
			max=c;
	}
	else
	{
		if(b>c)
			max=b;
		else
			max=c;
	}
	printf("%d is maximum",max);
	return 0;
}

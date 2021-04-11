/*WAP to count number of factors of a given number.*/
#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	printf("Total factors=%d",c);
	return 0;
}

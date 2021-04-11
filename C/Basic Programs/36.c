/*WAP to find sum of all even numbers between 1 to n.*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
			sum=sum+i;
	}
	printf("Sum=%d",sum);
	return 0;
}

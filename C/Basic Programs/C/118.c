/*WAF to find whether a number is perfect or not.*/
#include<stdio.h>
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		return 1;
	else 
		return 0;
}
int main()
{
	int num,z;
	printf("Enter a number: ");
	scanf("%d",&num);
	z=perfect(num);
	if(z==1)
		printf("Perfect Number");
	else
		printf("Not a Perfect Number");
	return 0;
}

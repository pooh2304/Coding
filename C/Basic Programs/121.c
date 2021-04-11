/*WAF to find amicable pair within a range.*/
int divisor(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	return sum;
}
#include<stdio.h>
int main()
{
	int a,b,x,y,i,j,flag=0;
	printf("Enter the range: ");
	scanf("%d%d",&a,&b);
	printf("Amicable pair between %d and %d are:\n",a,b);
	for(i=a;i<b;i++)
	{
		x=divisor(i);
		for(j=i+1;j<=b;j++)
		{
			y=divisor(j);
			if(x==j && y==i)
			{
				printf("%d\t%d\n",i,j);
				flag=1;
			}
		}
	}
	if(flag==0)
		printf("No amicable pairs in this range.");
	return 0;
}

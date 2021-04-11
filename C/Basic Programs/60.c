/*WAP to print all perfect numbers between 1 to n.*/
#include<stdio.h>
int main()
{
	int n,i,temp,j,sum;
	printf("Enter n:");
	scanf("%d",&n);
	printf("All Perfect numbers from 1 to %d are: ",n);
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		for(j=1;j<=temp/2;j++)
		{
			if(temp%j==0)
			sum=sum+j;
		}
		if(sum==i)
			printf("%d\t",i);
	}
	return 0;
}

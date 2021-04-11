/*WAP for the addition of N numbers.*/
#include<stdio.h>
int main()
{
	int n,sum,num,i;
	printf("Enter no. of terms:");
	scanf("%d",&n);
	printf("Enter %d numbers to find their sum:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("Sum=%d",sum);
	return 0;
}

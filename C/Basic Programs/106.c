/*WAP to find the sum of boundary elements of the matrix.*/
#include<stdio.h>
int main()
{
	int m,n,i,j,sum=0;
	printf("Enter rows & columns: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter array elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || i==m-1 || j==0 || j==n-1)
				sum=sum+a[i][j];
		}
	}
	printf("Sum of boundary elements: %d",sum);
	return 0;
}

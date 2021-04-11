/*WAP to find the sum of diagonal elements of a square matrix.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,j,sum=0;
	printf("Enter rows & columns: ");
	scanf("%d%d",&m,&n);
	if(m!=n)
	{	
		printf("Square matrix is not possible.");
		exit(0);
	}
	int a[m][n];
	printf("Enter matrix elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || j==n-i-1)
				sum=sum+a[i][j];
		}
	}
	printf("Sum of diagonal elements: %d",sum);
	return 0;
}

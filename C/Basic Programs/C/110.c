/*WAP to find multiplication of 2 matrix.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,x,y,i,j,k,sum;
	printf("Enter rows & columns of 1st matrix: ");
	scanf("%d%d",&m,&n);
	printf("Enter rows & columns of 2nd matrix: ");
	scanf("%d%d",&x,&y);
	if(n!=x)
	{
		printf("Multiplication not possible.");
		exit(0);
	}
	int a[m][n],b[x][y],c[m][y];
	printf("Enter elements of 1st matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix: ");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(k=0;k<y;k++)
		{
			sum=0;
			for(j=0;j<n;j++)
				sum=sum+(a[i][j]*b[j][k]);
			c[i][k]=sum;
		}
	}
	printf("Multiplication of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}


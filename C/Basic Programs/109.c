/*WAP to find transpose of a matrix.*/
#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter rows & columns: ");
	scanf("%d%d",&m,&n);
	int a[m][n],b[n][m];
	printf("Enter matrix elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("Transpose of the matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

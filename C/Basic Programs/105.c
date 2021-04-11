/*WAP to enter values for an integer matrix of M rows and N columns and count number of non-zero values and number of even numbers present 
in the matrix.*/
#include<stdio.h>
int main()
{
	int m,n,i,j,count=0,even=0;
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
			if(a[i][j]!=0)
			{
				count++;
				if(a[i][j]%2==0)
					even++;
			}
		}
	}
	printf("Non-zero values count: %d\nEven values count: %d",count,even);
	return 0;
}

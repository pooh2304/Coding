/*WAP to enter values to a 2-D array and print them in matrix form.*/
#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter rows & columns: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter array elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Array matrix are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	return 0;
}

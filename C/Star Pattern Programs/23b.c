/*Diamond Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
			printf("*");
		for(k=1;k<2*i-1;k++)
			printf(" ");
		for(j=1;j<=n-i+1;j++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(k=1;k<=2*n-2*i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

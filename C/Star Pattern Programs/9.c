/*Hollow Right Triangle Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(j==0||i==n-1||i==j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

/*Hollow Inverted Pyramid Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<n-i+1;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
		{
			if(i==n||k==1||k==2*i-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

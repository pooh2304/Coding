/*Hollow Inverted Mirrored Right Triangle Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==n-1||j==i)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

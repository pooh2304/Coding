/*Inverted Right Triangle Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

/*Pyramid Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(k=0;k<i+1;k++)
			printf("*");
		for(l=0;l<i;l++)
			printf("*");
		printf("\n");
	}
	return 0;
}
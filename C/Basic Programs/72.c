/*
54321
5432
543
54
5
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf("%d",j);
		printf("\n");
	}
	return 0;
}


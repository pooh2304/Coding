/*
5
44
333
2222
11111
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
			printf("%d",i);
		printf("\n");
	}
	return 0;
}

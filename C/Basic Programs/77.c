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
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",n-i+1);	
		printf("\n");
	}
	return 0;
}

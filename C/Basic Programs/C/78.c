/*
    5
   54
  543
 5432
54321
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
			printf("%d",n-j+1);	
		printf("\n");
	}
	return 0;
}

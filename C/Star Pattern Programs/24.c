/*Right Arrow Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<2*n;i++)
	{
		for(j=1;j<2*c-1;j++)
			printf(" ");
		for(j=0;j<=n-c;j++)
			printf("*");
		if(i<n)
			c++;
		else
			c--;
		printf("\n");
	}
	return 0;
}

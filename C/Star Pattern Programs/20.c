/*Half Diamond Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<=c;j++)
			printf("*");
		if(i<n-1)
			c++;
		else
			c--;
		printf("\n");
	}
	return 0;
}

/*Mirrored Half Diamond Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,s,c;
	printf("Enter n:");
	scanf("%d",&n);
	s=n;
	c=1;
	for(i=1;i<2*n;i++)
	{
		for(j=1;j<s;j++)
			printf(" ");
		for(j=1;j<=c;j++)
			printf("*");
		printf("\n");
		if(i<n)
		{
			c++;
			s--;
		}
		else
		{
			c--;
			s++;
		}
	}
	return 0;
}

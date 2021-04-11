/*Diamond Star Pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,k,c,s;
	printf("Enter n:");
	scanf("%d",&n);
	c=n;
	s=1;
	for(i=1;i<=2*n;i++)
	{
		for(j=1;j<=c;j++)
			printf("*");
		for(k=1;k<=2*(s-1);k++)
			printf(" ");
		for(j=1;j<=c;j++)
			printf("*");
		if(i<n)
		{
			c--;
			s++;
		}
		if(i>n)
		{
			c++;
			s--;
		}
		printf("\n");
	}
	return 0;
}

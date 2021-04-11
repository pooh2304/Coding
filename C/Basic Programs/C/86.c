/*
(n=4)
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/
#include<stdio.h>
int main()
{
	int n,i,j,k=1,c=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		for(j=1;j<=2*c-1;j++)
		{
			if(j%2==0)
				printf("*");
			else
				printf("%d",k++);
		}
		if(i<n)
			c++;
		else if(i==n)
			k=k-c;
		else
		{
			k=k-(2*c-1);
			c--;
		}
		printf("\n");
	}
	return 0;
}

/*
1*2*3*4*5
11*12*13*14*15
21*22*23*24*25
16*17*18*19*20
6*7*8*9*10
*/
#include<stdio.h>
int main()
{
	int n,i,j,k=1,c=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=n*c+1;
		for(j=1;j<2*n;j++)
		{
			if(j%2==0)
				printf("*");
			else
				printf("%d",k++);
		}
		if(n%2==0)
		{
			if(i<n/2)
				c+=2;
			else if(i==n/2)
				c++;
			else
				c-=2;
		}
		else
		{
			if(i<=n/2)
				c+=2;
			else if(i==n/2+1)
				c--;
			else
				c-=2;
		}
		printf("\n");
	}
	return 0;
}

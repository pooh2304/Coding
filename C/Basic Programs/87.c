/*
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/
#include<stdio.h>
int main()
{
	int n,i,j,k=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2==0)
				printf("*");
			else 
			{
				if(i%2==0)
					printf("%d",k--);
				else
					printf("%d",k++);
			}	
		}
		printf("\n");
		if(i%2==0)
			k=k+i+1;
		else
			k=k+i;
	}
	return 0;
}

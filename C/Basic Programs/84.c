/*
(n=4)								(n=6)
1111112					            1111112
3222222                             3222222
3333334                             3333334
5444444                             5444444
                                    5555556
                                    7666666
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=7;j++)
		{
			if((i%2==0 && j==1) || (i%2!=0 && j==7))
				printf("%d",i+1);
			else
				printf("%d",i);		
		}
		printf("\n");
	}
	return 0;
}

/*
    1
   232
  34543
 4567654
567898765
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(j<i)
				printf("%d",k++);
			else
				printf("%d",k--);
		}
		printf("\n");
	}
	return 0;
}

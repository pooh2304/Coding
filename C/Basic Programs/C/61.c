/*WAP to print all prime numbers between 1 to n.*/
#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("Enter n:");
	scanf("%d",&n);
	printf("All Prime numbers from 1 to %d are: ",n);
	for(i=2;i<=n;i++)
	{
		c=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
				c++;	
		}
		if(c==0)
			printf("%d\t",i);
	}
	return 0;
}

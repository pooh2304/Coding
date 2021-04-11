/*
(n=4, s=3)
3
44
555
6666
6666
555
44
3
*/
#include<stdio.h>
int main()
{
	int n,s,i,j,k=1;
	printf("Enter n and s:");
	scanf("%d%d",&n,&s);
	for(i=1;i<=2*n;i++)
	{
		for(j=1;j<=k;j++)
			printf("%d",s);
		if(i<n)
		{
			s++;
			k++;
		}
		else if(i>n)
		{
			s--;
			k--;
		}
		printf("\n");
	}
	return 0;
}

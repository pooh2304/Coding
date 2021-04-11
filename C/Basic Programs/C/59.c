/*WAP to print all strong numbers between 1 to n.*/
#include<stdio.h>
int main()
{
	int n,i,temp,r,j,sum,f;
	printf("Enter n:");
	scanf("%d",&n);
	printf("All Strong numbers from 1 to %d are: ",n);
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			f=1;
			r=temp%10;
			for(j=r;j>=1;j--)
				f*=j;
			sum+=f;
			temp/=10;
		}
		if(i==sum)
			printf("%d\t",i);
	}
	return 0;
}

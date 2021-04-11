/*WAP to print all palindrome numbers between 1 to n.*/
#include<stdio.h>
int main()
{
	int n,temp,rev,r,i;
	printf("Enter n:");
	scanf("%d",&n);
	printf("All palindrome numbers from 1 to %d are:\n",n);
	for(i=1;i<=n;i++)
	{
		temp=i;
		rev=0;
		while(temp>0)
		{
			r=temp%10;
			rev=rev*10+r;
			temp/=10;
		}
		if(i==rev)
			printf("%d\t",i);
	}
	return 0;
}

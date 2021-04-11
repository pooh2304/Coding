/*WAP to find power of a number.*/
#include<stdio.h>
int main()
{
	int a,n,i,ans;
	printf("Enter a number and its power:");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
		ans=ans*a;
	printf("Result=%d",ans);
	return 0;
}

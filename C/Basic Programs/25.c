/*WAP to find maximum between four numbers using conditional operator.*/
#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	printf("Enter four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=(a>b&&a>c&&a>d)?a:(b>c&&b>d)?b:(c>d)?c:d;
	printf("%d is maximum",max);
	return 0;
}

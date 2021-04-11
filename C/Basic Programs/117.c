/*WAF to find sum of series: 1 + 1/4 + 1/9 + 1/16 + … upto n terms.*/
#include<stdio.h>
float seriesSum(int n)
{
	float i;
	float sum=0;
	for(i=1;i<=n;i++)
		sum=sum+(1/(i*i));
	return sum;
}
int main()
{
	int n;
	float sum;
	printf("Enter n: ");
	scanf("%d",&n);
	sum=seriesSum(n);
	printf("Sum = %f",sum);
	return 0;
}

/*WAF to sum all the elements of an array.*/
#include<stdio.h>
int sumArray(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	return (sum);
}
int main()
{
	int n,sum,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sum=sumArray(a,n);
	printf("Sum of elements of the array: %d",sum);
	return 0;
}

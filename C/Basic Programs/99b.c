/*WAP to reverse an array (without using second array).*/
#include<stdio.h>
int main()
{
	int n,i,temp;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	printf("Reversed array: ");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	return 0;
}

/*Print the sum of elements of an array*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Sum of array elements is: ");
	for(i=0;i<n;i++)
		sum=sum+arr[i];
	printf("%d",sum);
	return 0;
}

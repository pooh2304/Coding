/*Traversing of an array*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array elements are: ");
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
	return 0;
}

/*Deleting an element in the array by index.*/
#include<stdio.h>
int main()
{
	int n,i,pos,arr[100];
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter position to delete:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
		arr[i]=arr[i+1];
	printf("Array elements are: ");
	for(i=0;i<n-1;i++)
		printf("%d  ",arr[i]);
	return 0;
}


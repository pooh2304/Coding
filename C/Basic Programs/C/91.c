/*Insertion of an element in the array by index.*/
#include<stdio.h>
int main()
{
	int n,i,pos,num,arr[100];
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter position and value to insert:");
	scanf("%d%d",&pos,&num);
	for(i=n;i>pos;i--)
		arr[i]=arr[i-1];
	arr[pos]=num;
	printf("Array elements are: ");
	for(i=0;i<=n;i++)
		printf("%d  ",arr[i]);
	return 0;
}


/*WAP to calculate the sum of array elements using pointer.*/
#include<stdio.h>
int main()
{
	int size,i,sum=0,*ptr;
	printf("Enter size: ");
	scanf("%d",&size);
	int a[size];
	printf("Enter array elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	ptr=a;
	for(i=0;i<size;i++)
		sum=sum+(*(ptr+i));
	printf("Sum of array elements: %d",sum);
	return 0;
}

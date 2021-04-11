/*WAP to check if a[i]=i[a].*/
#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter size: ");
	scanf("%d",&size);
	int a[size];
	printf("Enter array elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	printf("a[i]\ti[a]\n");
	for(i=0;i<size;i++)
		printf("%d\t%d\n",a[i],i[a]);
	return 0;
}

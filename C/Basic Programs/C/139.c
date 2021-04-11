/*Pointer to Array*/
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},i;
	int *ptr;
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("%u, %d\n",ptr,*ptr);
		ptr++;
	}
	printf("\n");
	for(i=0;i<5;i++)
		printf("%u, %d\n",a+i,*(a+i));
	return 0;
}

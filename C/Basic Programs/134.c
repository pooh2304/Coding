/*Void Pointer*/
#include<stdio.h>
int main()
{
	int z=10;
	void *ptr=&z;
	printf("%d",*(int *)ptr);
	return 0;
}

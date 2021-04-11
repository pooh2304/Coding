/*Constant Pointer*/
#include<stdio.h>
int main()
{
	int z=10;
	int * const p = &z;
	p++;
	return 0;
}

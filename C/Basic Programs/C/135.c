/*int to char Pointer*/
#include<stdio.h>
int main()
{
	int y=259;
	char *cptr;
	int *p=&y;
	cptr=(char *)p;
	printf("%d\n",*(cptr));
	cptr+=3;
	printf("%d\n",*(cptr));
	return 0;
}

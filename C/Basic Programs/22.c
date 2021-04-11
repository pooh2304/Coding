/*WAP to convert lower case alphabet to upper case using conditional operator.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	(ch>=97&&ch<=122)?printf("%c",ch=ch-32):printf("%c",ch);
	return 0;
}

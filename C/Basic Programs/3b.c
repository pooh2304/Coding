/*WAP to enter a character in small letter and convert it into capital letter.*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter any small alphabet:");
	scanf("%c",&ch);
	ch=toupper(ch);
	printf("%c",ch);
	return 0;
}

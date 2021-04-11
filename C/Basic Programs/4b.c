/*WAP to enter a character in capital letter and convert it into small letter.*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter any small alphabet:");
	scanf("%c",&ch);
	ch=tolower(ch);
	printf("%c",ch);
	return 0;
}

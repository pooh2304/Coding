/*WAP to input any key from keyboard and check whether it is an alphabet, digit or special character.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		printf("Alphabet");
	else if(ch>='0'&&ch<='9')
		printf("Digit");
	else
		printf("Special Characters");
	return 0;
}

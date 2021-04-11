/*WAP to check whether an alphabet is vowel or consonant using switch-case.*/
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	ch=tolower(ch);
	switch(ch)
	{
		case 'a':
			printf("Vowel");
			break;
		case 'e':
			printf("Vowel");
			break;
		case 'i':
			printf("Vowel");
			break;
		case 'o':
			printf("Vowel");
			break;
		case 'u':
			printf("Vowel");
			break;
		default:
			printf("Consonant");
	}
	return 0;
}

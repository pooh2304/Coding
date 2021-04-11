/*WAP to load info of five different books and display the info.*/
#include<stdio.h>
struct bk
{
	int isbn;
	char title[20];
	int page;
};
typedef struct bk book;
int main()
{
	book b[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter ISBN, Book Title, No. of Pages : ");
		scanf("%d%s%d",&b[i].isbn,b[i].title,&b[i].page);
	}
	for(i=0;i<5;i++)
	{
		printf("ISBN : %d\n",b[i].isbn);
		printf("Title : %s\n",b[i].title);
		printf("Page : %d\n\n",b[i].page);
	}
	return 0;
}

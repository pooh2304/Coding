/*Passing Array of Structure to Function*/
#include<stdio.h>
void dispArray(book *pt,int n)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nISBN: %d",pt->isbn);
		printf("\nTitle: %s",pt->title);
		printf("\nNo. of Pages: %d",pt->page);
		pt++;
	}
}
/*void dispArray(book pt[],int n)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nISBN: %d",pt[i].isbn);
		printf("\nTitle: %s",pt[i].title);
		printf("\nNo. of Pages: %d",pt[i].page);
		pt++;
	}
}
*/
int main()
{
	book b[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("ISBN:");
		scanf("%d",&b[i].isbn);
		printf("Title:");
		scanf("%s",&b[i].title);
		printf("Pages:");
		scanf("%d",&b[i].page);
	}
	printf("\nInformation:\n";)
	dispArray(b,3);
	return 0;
}

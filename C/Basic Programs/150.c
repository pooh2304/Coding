/*Enter info of 5 books and sort the info with respect to pages of the books in ascending order and display them.*/
#include<stdio.h>
struct bk
{
	int isbn;
	char title[10];
	int page;
};
typedef struct bk book;
void sortbook(book b[],int n)
{
	int i,j;
	book t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i].page>b[j].page)
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
}
void display(book *pt,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nISBN: %d",pt->isbn);
		printf("\nTitle: %s",pt->title);
		printf("\nNo. of Pages: %d",pt->page);
		pt++;
		printf("\n");
	}
}
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	book b[n],t;
	for(i=0;i<n;i++)
	{
		printf("ISBN:");
		scanf("%d",&b[i].isbn);
		printf("Title:");
		scanf("%s",&b[i].title);
		printf("Pages:");
		scanf("%d",&b[i].page);
	}
	sortbook(b,n);
	display(b,n);
}

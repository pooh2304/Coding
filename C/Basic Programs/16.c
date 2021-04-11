/*WAP to input amount from user and print minimum number of notes (Rs. 500,100,50,20,10,5,2,1) required for the amount.*/
#include<stdio.h>
int main()
{
	int amt;
	int n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
	printf("Enter amount:");
	scanf("%d",&amt);
	
	n500=amt/500;
	amt-=n500*500;
	n100=amt/100;
	amt-=n100*100;
	n50=amt/50;
	amt-=n50*50;
	n20=amt/20;
	amt-=n20*20;
	n10=amt/10;
	amt-=n10*10;
	n5=amt/5;
	amt-=n5*5;
	n2=amt/2;
	amt-=n2*2;
	n1=amt/1;
	amt-=n1*1;
	
	printf("500:%d\n100:%d\n50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d",n500,n100,n50,n20,n10,n5,n2,n1);
	return 0;
}

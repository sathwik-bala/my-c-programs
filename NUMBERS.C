#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter 1st number:");
	scanf("%d",&i);
	printf("enter last number:");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		printf("%d\n",i);
	}
	getch();

}
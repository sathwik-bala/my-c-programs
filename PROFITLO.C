// program for identifing profit or loss

#include<stdio.h>
#include<conio.h>

void main()
{
	long int a,b;
	clrscr();
	puts("Enter your item cost price:");
	scanf("%d",&a);
	puts("Enter your item selling price:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("You are at profit");
	}
	else if(a>b)
	{
		printf("You are at loss");
	}
	else
	{
		printf("You are neither at profit nor at loss");
	}
	getch();
}
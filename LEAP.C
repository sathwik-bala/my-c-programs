// program for identifing leap years

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
	getch();



}
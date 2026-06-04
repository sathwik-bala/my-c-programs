



//program for result
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	puts("Enter 1st subject marks :");
	scanf("%d",&a);
	puts("Enter 2nd subject marks :");
	scanf("%d",&b);
	puts("Enter 3rd subject marks :");
	scanf("%d",&c);
	if(a>100||b>100||c>100)
	{
		printf("Invalid marks");
	}
	else if(a>=35&&b>=35&&c>=35)
	{
		printf("Result:Pass");
	}
	else
	{
		printf("Result:Fail");
	}
	getch();
}
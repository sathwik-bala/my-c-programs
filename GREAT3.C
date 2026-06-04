#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	puts("Enter three numbers\n1st:");
	scanf("%d",&a);
	puts("2nd:");
	scanf("%d",&b);
	puts("3rd:");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("1st number is greater than other numbers");
	}
	else if(b>a&&b>c)
	{
		printf("2nd number is greater than other numbers");
	}
	else if(c>a&&c>b)
	{
		printf("3rd number is greater than other numbers");
	}
	else if(a==c)
	{
		printf("1st and 3rd numbers are equal");
	}
	else if(a==b)
	{
		printf("1st and 2nd numbers are equal");
	}
	else if(b==c)
	{
		printf("2nd and 3rd numbers are equal");
	}
	else
	{
		printf("All numbers are equal");
	}
	getch();

}
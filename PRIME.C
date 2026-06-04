#include<stdio.h>
#include<conio.h>
void main()
{
	long int i,n,a=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			a++;
		}
	}
	if(a==0)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
	getch();

}

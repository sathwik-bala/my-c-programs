#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n;
	clrscr();
	printf("enter the number for multiplication table:");
	scanf("%f",&i);
	for(n=1;i*n<=i*20;n++)
	{
		printf("%f*%f=%f\n",i,n,n*i);
	}
	getch();
}
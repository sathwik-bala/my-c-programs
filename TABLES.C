#include<stdio.h>
#include<conio.h>
void main()
{
	 int a,b,c;
	 clrscr();
	 printf("enter first number:");
	 scanf("%d",&a);
	 printf("enter last number:");
	 scanf("%d",&b);
	 for(a;a<=b;a++)
	 {
		for(c=1;c<=10;c++)
		{
			printf("%d*%d=%d\n",a,c,a*c);
		}
		printf("press enter to continue");
		getch();
		clrscr();
	 }
}
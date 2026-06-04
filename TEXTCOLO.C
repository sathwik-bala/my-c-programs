#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	char b;
	clrscr();
	printf("1.Red\n2.Green\n3.Yellow\n4.Blue\n5.Magenta");
	printf("\nChoose a colour by typing its number :");
	scanf("%d",a);
       /*	printf("\nType the word ;");
	scanf("%c",b);*/
	if(a>=6||a<=0)
	{
		textcolor(CYAN);
		cprintf("Invalid option");
	}
	else if(a==2)
	{
		textcolor(GREEN);
	       //	cprintf("%c",b);
	}
	else if(a==3)
	{
		textcolor(YELLOW);
		//cprintf("%c",b);
	}
	else if(a==1)
	{
		textcolor(RED);
		//cprintf("%c",b);
	}
	else if(a==4)
	{
		textcolor(BLUE);
		//cprintf("%c",b);
	}
	else if(a==5)
	{
		textcolor(MAGENTA);
		//cprintf("%c",b);
	}
	cprintf("hello");
	getch();

}
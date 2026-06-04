 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int a[10][10],b[10][10],i,j,n,m;
	clrscr();
	printf("Enter number of rows:");
	scanf("%d",&n);
	printf("Enter number of columns:");
	scanf("%d",&m);
	printf("Enter numbers for matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter numbers for 2nd matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Press enter to continue");
	getch();
	clrscr();
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	printf("Press any key to continue\n");
	getch();
	clrscr();
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	getch();
 }
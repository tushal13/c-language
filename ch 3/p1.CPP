#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("=> ENTER YOUR VALUE OF A :- ");
	scanf("%d",&a);
	printf("=> ENTER YOUR VALUE OF B :- ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("******AFTER SWAPPING ******\n");
	printf("A = %d\n",a);
	printf("B = %d",b);
	getch();

}
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("=> ENTER YOUR VALUE OF A :- ");
	scanf("%d",&a);
	printf("=> ENTER YOUR VALUE OF B :- ");
	scanf("%d",&b);
	a=b;
	b=a;
	printf("******AFTER SWAPPING ******\n");
	printf("A = %d\n",a);
	printf("B = %d",b);
	getch();

}
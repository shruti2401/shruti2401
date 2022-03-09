#include<conio.h>
#include<stdio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("\ Enter any number");
	scanf("%d",&n);
	do
	{
		printf("%d",i);
		i++;
	}
	while(i<=n);
	getch();
}

#include<stdio.h>
void main()
{
	char ch1,ch2;
	int a;
	ch1 = getchar();
	ch2 = getchar();
	printf("%c,%d\n",ch1+32,ch2 );
	putchar(getchar());
	putchar(',');
	a = getchar();
	printf("%d\n", a);
}
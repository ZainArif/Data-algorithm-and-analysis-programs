#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("\n\t");
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=a;b++)
		printf("*");
		printf("\n\t");
	}
}

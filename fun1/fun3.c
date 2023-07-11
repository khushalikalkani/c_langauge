//with argument no return...
#include<stdio.h>
int number(int a)
{
	int i;
	for(i = a; i>=1; i--)
	{
		printf(" %d", i);
	}	
}

void main()
{
	number(10);
}
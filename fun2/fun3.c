//with argument no return
#include<stdio.h>
int number(int a, int b)
{
	int i;
	for(i = a; i<=b; i++){
		printf(" %d", i);
	}
}

void main()
{
	number(51, 99);
}
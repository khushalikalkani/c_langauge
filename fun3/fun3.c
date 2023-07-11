// witn argument no return
#include<stdio.h>
void incre(int a)
{
	int i;
	for(i = 1; i<=a; i++)
	{
		printf("%d", i);
	}
}
void main()
{
	incre(9);
}
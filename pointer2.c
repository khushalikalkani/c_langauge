#include<stdio.h>
int main()
{
	int x, y, *p, *q;
	
	printf("enter a x value");
	scanf("%d", &x);
	printf("enter a y value");
	scanf("%d",&y);
	p = &x;
	q = &y;

	printf("x address is %d",p);
	printf("\ny address is %d",q);

	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
	
	printf("x value is %d",*p);
	printf("\ny value is %d",*q);

	
}
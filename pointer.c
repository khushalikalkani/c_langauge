#include<stdio.h>
int main()
{
	int a = 10, *p, **q;
	p = &a;
	q = &p;
	printf("value of A is: %d", a);
	printf("\nAddress of A is: %u",&a);
	printf("\nAddress of A using p is: %d",p);
	printf("\nAddress of p is: %u", &p);
	printf("\nValue of A using p is: %d", *p);
	printf("\nvalue of A using q is: %d", **q);
}
#include<stdio.h>
void main()
{
	int celsius;
	float fehrenheit;
	printf("enter a celsius");
	scanf("%d", &celsius);
	fehrenheit =  celsius * (9/5) +  32;
	printf("fehren is %f", fehrenheit);
}
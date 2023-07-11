#include<stdio.h>
void main()
{
	int x, y;
	printf("enter a x value");
	scanf("%d", &x);
	printf("enter a y value");
	scanf("%d",&y);
	x = x + y;
	y = x - y;
	x = x -y;
	
	printf("x value is %d", x);
	printf("y value is %d", y);


}
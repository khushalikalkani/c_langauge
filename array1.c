#include<stdio.h>
void main()
{
	int x[] = {1,2,3,4,5,6,7},i;
	int y[] = {11,12,13,14,15,16,17};
	
	for(i = 0; i<7; i++)
	{
		printf("\n x[%d]: %d \t y[%d]: %d", i,x[i],i,y[i]);
	}
}
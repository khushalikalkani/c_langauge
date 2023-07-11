//print 1,2,3,4,5....
#include<stdio.h>
void main()
{
	int i=1,x;
	while(i<=5){
	x = 1;
	while(x<=5){
		printf("%d",x);
		x++;
		}
	printf("\n");
	i++;
	}
}
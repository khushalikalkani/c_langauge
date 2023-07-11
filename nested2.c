//print 5,5,5,5,5....
#include<stdio.h>

void main()
{
	int i=5,x;
	while(i>=1){
	x = 5;
		while(x>=1){
		printf("%d ",i);
		x--;
	}
	printf("\n");
	i--;
    }
}
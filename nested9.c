//print 11,12,13,14,15.....
#include<stdio.h>
void main()
{
	int i =1,n,x = 11;
	do{
		n=1;
		do{
			printf("%d ",x++);
		n++;
	}while(n<=5);
	printf("\n");
	i++;
	x+=5;
	}while(i<=5);
}
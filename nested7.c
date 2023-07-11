 //print 1,2,3,4,5,6...
#include<stdio.h>
void main()
{
	int i =1,n,x = 1;
	do{
		n=1;
		do{
			printf("%d ",x++);
		n++;
	}while(n<=5);
	printf("\n");
	i++;
	}while(i<=5);
}
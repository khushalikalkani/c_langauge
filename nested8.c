//print A,B,C,D,E...
#include<stdio.h>
void main()
{
	int i =1,n,x = 'A';
	do{
		n=1;
		do{
			printf("%c ",x++);
		n++;
	}while(n<=5);
	printf("\n");
	i++;
	
	}while(i<=5);
}
// print 1,1,1,1,1....
#include<stdio.h>
void main()
{
	int i =1, x;
	do{
		x = 1;
		do{
		if(i % 2 != 0){
		printf("%d",i);
			
		}
		x++;
		}while(x<=5);
		printf("\n");
	i++;
	}while(i<=10);
}
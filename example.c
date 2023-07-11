#include<stdio.h>
void main()
{
	int i, total = 0;
  	for(i = 1; i <= 5; i+=2){
	total = total + i;
	printf("%d",i);
	}
	printf("/n total %d",total);
}
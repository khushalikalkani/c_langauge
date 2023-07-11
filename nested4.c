//print A,A,A,A,A....
#include<stdio.h>
void main()
{
	char i, x;
	while(i<=4){
	x = 1;
	while(x<=5){
		printf("%c",i+65);
		x++;
		}
	printf("\n");
	i++;
}
}
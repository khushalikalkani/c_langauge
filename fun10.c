#include<stdio.h>
void alphabet()
{
	int i;
	for(i = 65; i<=90; i++){
		printf("%c-%c ", i, i+32); 
	}
	
}
void main()
{
	alphabet();	
}
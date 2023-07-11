//print A, C, E, G....
#include<stdio.h>
void main()
{
	char ch = 'A';
	do{
	  	printf("%c", ch);
		ch+=2;	
	}while(ch<='Z');
}
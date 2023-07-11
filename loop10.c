// print A-a, B-b....
#include<stdio.h>
void main()
{
	char ch = 'A', i='a';
	do{
	printf("%c-%c ", ch,i);
	ch++;
	i++;
	}while(ch<='Z');
	
}
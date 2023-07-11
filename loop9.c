//print A-65, B-66....
#include<stdio.h>
void main()
{
	char ch = 'A';
	do{
	printf("%c-%d ", ch,ch);
	ch++;
	}while(ch<='Z');
	
}

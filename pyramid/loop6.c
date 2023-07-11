// print A,A,B,A,B,C...

#include<stdio.h>
void main()
{
	char i = 'A',k;
	while(i<='E'){
	k = 'A';
	while(k<=i){
		printf("%c", k);
		k++;
		}
	printf("\n");
	i++;
	}
}
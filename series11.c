//print A, c, E,g....
#include<stdio.h>
void main()
{
	int i=0;
	do{
		if(i % 4 == 0)
	 
		printf("%c", i+65);
		
	
		else{
		printf("%c", i+97);
		}
		i+=2;
}
		while(i<=24);
}
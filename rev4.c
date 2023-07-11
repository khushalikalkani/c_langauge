#include<stdio.h>
void main()
{	
	int i = 1,j, n = 11;
	text:
	if(i<=5){
	j = 1;
	hello:
		if(j<=5){
		printf("%d",i);
		j++;
		
	goto hello;
	}
	
	printf("\n");
	i++;
	goto text;
	}
}
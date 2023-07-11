#include<stdio.h>
void main()
{
	int i = 1;
	text:
	if(i<=5){
	 int j = 1;
	loop:
	if(j<=i){
		printf("%d", i);
		j++;
	goto loop;
	}
	printf("\n");
	i++;
	goto text;
	}
}
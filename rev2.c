#include<stdio.h>
int main()
{
	int i;
	i = 1;
	text:
	if(i<=5){
	int j = 1;
	hello:
	if(j<=i){
		printf("%d",j);
		j++;
	goto hello;
	}
	printf("\n");
	i++;
	goto text;
	}

}
#include<stdio.h>
void main()
{
	int i, j;
	i = 1;
	text:
	if(i<=5)
	{
		 j = 1;
		if(j<=i){
		printf("%d",j);
		j++;
		}
	i++;
	goto text;
	printf("\n");
	}
}
//print 1,2,2,3,3,3....
#include<stdio.h>
void main()
{
	int i=1,k;
	while(i<=5){
	k = 1;
	while(k<=i){
		printf("%d",i);
		k++;
	}
	printf("\n");
	i++;
	}
}
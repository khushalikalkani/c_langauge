//print 1,1,2,1,2...
#include<stdio.h>
void main()
{
	int i = 1,k;
	while(i<=5){
	k = 1;
	while(k<=i){
		printf("%d", k);
		k++;
		}
	printf("\n");
	i++;
	}
}
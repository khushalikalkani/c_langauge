//print 5,5,4,5,4,3...
#include<stdio.h>
void main()
{
	int i = 5,k;
	while(i>=1){
	k = 5;
	while(k>=i){
		printf("%d", k);
		k--;
		}
	printf("\n");
	i--;
	}
}
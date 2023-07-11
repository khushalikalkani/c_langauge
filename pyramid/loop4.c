//print 1,2,3,4,5,6...
#include<stdio.h>
void main()
{
	int i = 1,k,n=1;
	while(i<=5){
	k = 1;
	while(k<=i){
		printf("%d", n++);
		k++;
		}
	printf("\n");
	i++;
	}
}
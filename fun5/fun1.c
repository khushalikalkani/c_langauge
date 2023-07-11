#include<stdio.h>
void decrement()
{
	int i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i = n; i>=-n; i--){
		printf(" %d", -i);
	}
	
}

void main()
{
	decrement();
}
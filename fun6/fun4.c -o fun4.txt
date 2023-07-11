#include<stdio.h>
void odd(int n)
{
	int i;
	printf("enter a number: ");
	scanf("%d", &n);
	for(i = 1; i<=n; i++){
		if(i % 2 == 0){
		printf(" %d", i);
		}
	}
}

void main()
{
 	odd(12);
}
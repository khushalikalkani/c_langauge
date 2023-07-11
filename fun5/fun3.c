#include<stdio.h>
void center(int n)
{
	int i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i = n; i>=-n; i--){
		printf(" %d", -i);
	}
}
void main()
{
	center(7);
}
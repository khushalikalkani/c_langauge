#include<stdio.h>
int center(int a)
{
	return a;
}
void main()
{
	int i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i = n; i>=-n; i--){
		printf(" %d", center(-i));
	}
}
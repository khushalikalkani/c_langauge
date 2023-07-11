#include<stdio.h>
int decre(int n)
{
	int i;
	printf("enter a n number");
	scanf("%d", &n);
	for(i = n; i>=1; i--){
		printf(" %d", i);
	}
}
void main()
{
	decre(10);	
}
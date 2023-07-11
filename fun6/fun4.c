#include<stdio.h>
int odd(int a)
{
	return a;
}

void main()
{
 	int i,n;
	printf("enter a number: ");
	scanf("%d", &n);
	for(i = 1; i<=n; i++){
		if(i % 2 == 0){
		printf(" %d", odd(i));
		}
	}
}
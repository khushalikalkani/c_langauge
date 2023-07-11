#include<stdio.h>

int decre(int a)
{
	return a;	
}

void main()
{
	int i, n;
	printf("Enter a number");
	scanf("%d", &n);
	for(i = n; i>=1; i--)
	{
		printf("%d", decre(i));
	}
}
//print -n to n

#include<stdio.h>
void main()
{
	int i, n;
	printf("Enter a number");
	scanf("%d", &n);
	i=-n;
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	
}
//print 1 to n....
#include<stdio.h>
void main()
{
	int n, i = 1;
	printf("Enter a number");
	scanf("%d", &n);
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}
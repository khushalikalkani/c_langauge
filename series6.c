//print 1,2,4,8,16.....
#include<stdio.h>

void main()
{
	int i=1, n;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
	printf("%d", i);
	i*=2;
        }
}
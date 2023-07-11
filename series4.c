// print 1,4,9,16....
#include<stdio.h>
void main()
{
	int i = 1,n,total = 0;
	printf("Enter a number");
	scanf("%d", &n);
	while(i<=n)
	{
		total = i * i;
		printf("%d ", total);
		i++;
	}
}
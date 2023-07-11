// print 1,4,3,16,5.....
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter a number");
	scanf("%d", &n);
	while(i<=n)
	{
	 if(i % 2 != 0)
	{
		printf("%d ",i);
		i++;
	}
	if(i % 2 == 0)
	{
		printf("%d ", i*i);
		i++;
	}
  }
}
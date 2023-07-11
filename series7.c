//print 1,4,12,32,80.....
#include<stdio.h>
void main()
{
	int i = 1,n,x=1;
	printf("Enter a number");
  	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",i*x);
		x= x * 2;
		i++;
	}

	
}
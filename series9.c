//print 1,1,2,3,5...
#include<stdio.h>
void main()
{
	int i=1,n,a=1,b=1,c;
  	printf("Enter a number");
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	do{
		c = a + b;
		printf("%d",c);
		a = b;
		b = c;
		i++;
	}while(i<=n);
	
}
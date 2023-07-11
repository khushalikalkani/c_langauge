//print n to 1...
#include<stdio.h>
void main()
{
	int i=1, n;
	printf("Enter a number");
	scanf("%d", &n);
	while(n>=i)
	{	
		printf("%d ",n);
		n--;
	} 
}
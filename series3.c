//print total of even number
#include<stdio.h>
void main()
{
	int i =1, total = 0, n;
   	printf("Enter a number");
	scanf("%d", &n);
	while(i<=n)
	{
		if(i % 2 != 0)
		{
		total = total + i;
 		printf("%d",i);
		}
	i++;
	}
	printf("\n total is %d", total);
}
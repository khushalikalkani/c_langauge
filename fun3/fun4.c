//with argument with return
#include<stdio.h>
int incre(int a)
{
	return a;
}
int main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d", &n);
	for(i = 1; i<=n; i++)
	{
	printf("%d", incre(i));
	} 
	
}
// print even up to n
#include<stdio.h>
void main()
{
	int i = 1,n;
	printf("Enter a number");
	scanf("%d", &n);
	do{
		if(i % 2 != 0){
		printf("%d ",i);
		}
		i++;
	}while(i<=n);
}
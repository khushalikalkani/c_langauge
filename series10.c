// print 0.5, 1, 2.5....
#include<stdio.h>
void main()
{
	float j= 0.5, i= 0.5;
	int n;
	printf("Enter a number");
	scanf("%d", &n);
        printf("%.1f",j);
	do{
		
		j = j+i;
		printf("%.1f ",j);
		i++;
	}while(i<=n);
}
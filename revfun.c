//no argument no return
#include<stdio.h>
void reverse()                                                                                                       
{
	int r = 0,x;
	printf("enter a value: ");
	scanf("%d", &x);
	while(x != 0){
		r = r * 10 + (x%10);
		x = x/10;	
	}
	printf("%d", r);
}
void main()
{
	reverse();
}

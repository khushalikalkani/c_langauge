#include<stdio.h>
int fibo(int a)
{
	if(a == 0){
		return 1;
	}
	else if(a == 1){
		return 1;
	}
	else{
		return fibo(a - 1)+fibo(a - 2);
	}	
}
int main()
{
	int i, x;
	printf("Enter a number");
	scanf("%d", &x);
	for(i = 0; i<x; i++){
		printf("  %d", fibo(i));
	}	
}
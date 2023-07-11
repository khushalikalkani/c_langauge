#include<stdio.h>
int factorial(int i)
{
	if(i == 1){
	return 1;
	}
	else{
	return i * factorial(i - 1);
	}
}
int main()
{
	int x = factorial(8);
	printf("factorial is: %d", x);
}
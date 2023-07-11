//with argument with return
#include<stdio.h>
int number(int i)
{
	return i;
}

int main()
{
	int i;
	for(i = 51; i<=99; i++){
		printf("%d", number(i));
	}
	
}
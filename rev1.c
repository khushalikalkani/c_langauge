#include<stdio.h>

int newfun(int i){
	printf("winding phase: %d\n", i);
	if(i<4){
		newfun(++i);
	}
	printf("unwinding phase: %d\n", i);
	}

int main()
	{
	newfun(1);
	}

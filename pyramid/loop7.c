#include<stdio.h>
void main()
{
	int i, j, n = 'A';
	do{
		do{
		j = 1;
		if(i % 2 == 0){
		printf("%c", n+32);
		}else{
		printf("%c",n);
		n++;
		}
		j++;
		
		}while(j<=i);
	printf("\n");	
	i++;
	}while(i<=5);
}
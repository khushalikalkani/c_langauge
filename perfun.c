#include<stdio.h>
void perfect(int x)
{
	int i,total = 0;
	for(i = 1; i<x; i++){
		if(x % i == 0){
		printf("%d", i);
		total = total + i;
		}
	}
	if(total == x){
	printf("the number is perfect %d",total); 
	}else{
	printf("The number is not perfect");
	}
}
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d", &a);
	perfect(a);	
		
}
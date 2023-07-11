#include<stdio.h>
void main()
{
	int arr[5][5], i, j;
	
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
		if(i == j){
			printf(" %d",1);
			}
			else{
			printf(" %d",0);		
			}
		}
		printf("\n");
	}
}
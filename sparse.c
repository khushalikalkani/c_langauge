#include<stdio.h>
void main()
{
	int arr[5][5], i, j;
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf("enter arr[%d][%d]:", i, j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			if(arr[i][j] == 0){
			printf(" %s"," ");
			}else{
			printf(" %d",arr[i][j]);
			}
		}
		printf("\n");
	}
}
#include<stdio.h>
void main()
{
	int arr[4][4], i, j;
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf("enter arr[%d][%d]:", i, j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf(" %d",arr[j][i]);
		}
		printf("\n");
	}
}
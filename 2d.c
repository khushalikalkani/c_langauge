// print 123
//           456
//           789....
#include<stdio.h>
int main()
{
	int a[5][5], b[4][4], i, j;
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
		printf("enter a[%d][%d]:", i, j);
		scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
		printf("enter b[%d][%d]:",i,j);
		scanf("\n\n%d",&b[i][j]);
		}
	}	
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
		printf(" %d",a[i][j]);
		}
			printf("\t");
			for(j = 0; j<3; j++){
			printf(" %d",b[i][j]);
			}
		
		printf("\n");
	}
}
#include<stdio.h>
void main()
{
	int arr[6],i;
	for(i=0; i<6; i++){
		printf("enter a[%d]:",i);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<6;  i++)
	printf("\n a[%d]: %d",i,arr[i]);
	
}
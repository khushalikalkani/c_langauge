#include<stdio.h>
void main()
{
	int i,arr[6],oddtotal = 0,eventotal =0;
	for(i = 0; i<6; i++){
		printf("enter a number[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i = 0; i<6; i++){
		if(i % 2 != 0){
		oddtotal = oddtotal + arr[i];
		printf("\n odd number is %d",arr[i]);
		}
		
		else{
		eventotal = eventotal + arr[i];
		printf("\t\t even number is %d",arr[i]);
		}
		

	}
	printf("\n oddtotal is %d",oddtotal);
	printf("\t\t\teventotal is %d",eventotal);

}
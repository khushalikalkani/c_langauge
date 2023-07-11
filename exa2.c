#include<stdio.h>
void main()
{
	int i,arr[6],oddtotal = 0, eventotal = 0,total;
	for(i = 0; i<6; i++){
		printf("enter a number [%d]",i);
		scanf("%d", &arr[i]);
	}
	for(i = 0; i<6; i++){
		if(arr[i] % 2 != 0){
		oddtotal = oddtotal + arr[i];
		printf("\n odd number is %d", arr[i]);
		}
		else{
		eventotal = eventotal + arr[i];
		printf("\neven number is %d",arr[i]);
		}
}
	printf("\n oddtotal is %d",oddtotal);
	printf("\neventotal is %d",eventotal);
	printf("\ntotal of odd and even is %d",(oddtotal+eventotal));

}
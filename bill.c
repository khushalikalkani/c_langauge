#include<stdio.h>
struct bill{
	float rate, qty, amt, dis, billamt, gst, netbill;
	int productno;
	char name[50];
	
	
};
int main()
{
	struct bill arr[10];
	int i;
 	for(i = 0; i<5; i++){
	printf("enter a product no: ");
	scanf("%d",&arr[i].productno);
	printf("enter a name: ");
	scanf("%s",&arr[i].name);
	printf("enter a qty: ");
	scanf("%f",&arr[i].qty);
	printf("enter a rate: ");
	scanf("%f",&arr[i].rate);
	printf("\n");	
	} 
	printf("Pro.no.\tname\tqty\trate\tamt\tdis(5%)\tbillAmt\tgst\tnetbill");
	for(i = 0; i<5; i++){
	
	arr[i].amt = arr[i].qty * arr[i].rate;
	arr[i].dis = (arr[i].amt * 5) / 100;
	arr[i].billamt = arr[i].amt - arr[i].dis;
	arr[i].gst = (arr[i].billamt * 18) / 100;
	arr[i].netbill = arr[i].billamt + arr[i].gst;
		
	printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",arr		[i].productno,arr[i].name,arr[i].qty,arr[i].rate,arr[i].amt,arr[i].dis,arr		[i].billamt,arr[i].gst,arr[i].netbill);	
	}
}
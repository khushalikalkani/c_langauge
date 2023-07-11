#include<stdio.h>
void main()
{
	int units;
	float bill, charges, surcharges;
	printf("enter a units amount");
	scanf("%d", &units);
	if(bill <= 100){
		bill = 50 + (units * 0.60);
		printf("bill is %.2f", bill);
	}else if(units > 100 && units <= 300){
	bill = 50 + 60 + ((units - 100) * 0.80);
	printf("\n bill is %.2f, bill);
	if(bill > 300)
	{
		charges = bill - 300 * 0.15;
		printf("charges is %.2f", charges);
		bill = bill + charges:
		printf("bill is %.2f", bill);
	}
	}
	else if(units > 300){
		bill = 50 + 60 + 160 +((units - 300) * 0.90;
		printf("%.2f",bill);
	}
}
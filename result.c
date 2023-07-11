
#include<stdio.h>
void main()
{
	int a[5],b[5],c[5],d[5],i,total,percent,grade;
	 for(i = 1; i<=5; i++){
	printf(" enter a gujarati marks [%d]",i);
	scanf("%d",&a[i]);
	}
	printf("\n");

	for(i = 1; i<=5; i++){
	printf(" enter a maths marks [%d]",i);
	scanf("%d",&b[i]);
	} 
	printf("\n");

	for(i = 1; i<=5; i++){
	printf(" enter a sci marks [%d]",i);
	scanf("%d",&c[i]);
	}
	printf("\n");

 	for(i = 1; i<=5; i++){
	printf(" enter a eng marks [%d]",i);
	scanf("%d",&d[i]);
	}
	printf("\n");
	printf("\nguj. \tmaths \tsci. \teng. \ttotal \tper(%) \tgrade");
	for(i = 1; i<=5; i++){
	total = a[i]+b[i]+c[i]+d[i];
	percent = total * 100 / 400;
	
	printf("\n%d \t%d \t%d \t%d \t%d \t%d ",a[i],b[i],c[i],d[i],total,percent);
	if(a[i] <=35){
		printf("\t%s","fail");
	}else if(b[i]<=35){
		printf("\t%s","fail");
	}else if(c[i]<=35){
		printf("\t%s","fail");
	}else if(d[i]<=35){
		printf("\t%s","fail");
	}else if(percent>75){
		printf("\t%c",'A');
	}else if(percent>60 && percent<=75){
		printf("\t%c",'B');
	}else if(percent>45 && percent<=60){
		printf("\t%c",'C');
	}else if(percent>35 && percent<=45){
		printf("\t%c", 'D');
	}else{	
		printf("\t%s","fail");
	}
         }
}
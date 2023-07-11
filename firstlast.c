#include<stdio.h>
void main()
{
	char a[20];
	int i = 0, j;
	printf("enter string: ");
	gets(a);
	while(a[i] != '\0'){
	i++;
	}
	for(j = 0; j<(i/2); j++){
	printf("%c %c " , a[j], a[i-j-1]);
	}
	if(i % 2 != 0){
	printf("%c", a[i/2]);
	}
}
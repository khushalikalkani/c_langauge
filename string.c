#include<stdio.h>
int main()
{
	char str[20], arr[20];
	int n;
	printf("Enter string: ");
	gets(str);
	printf("Your String is: %s", str); 
	int i = 0;
	while(str[i] != '\0'){
	i++;
	n = i;
	}
	int j = 0;
	while(j<i){
	arr[j] = str[--n];
	j++;
	}
	arr[j] = '\0';
	printf("\n reverse string is: %s", arr);
	
	
}
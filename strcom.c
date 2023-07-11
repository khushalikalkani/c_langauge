// print combination of string.....
#include<stdio.h>
void main()
{
	char  str1[20], str2[20];
	printf("Enter a first string: ");
	gets(str1);
	
	
	printf("\nEnter a second string: "); 
	gets(str2);
	
	int i = 0, j = 0;
	while(str1[i] != '\0'){
	i++;
	}
	while(str2[j] != '\0'){
	str1[i++] = str2[j++];
	}
	str1[i]  = '\0';
	printf("\n mergestring is: %s ",str1);

}
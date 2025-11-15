#include<stdio.h>
#include<string.h>
main(){
	char str1[20], str2[20], str3[20];
	printf("\n Enter your str1 : ");
	scanf("%s", str1);
	printf("\n Enter your str2 : ");
	scanf("%s", str2);
	printf("\n Length of str %s = %d", str1, strlen(str1));
	
	//Uppercase the string
	strupr(str1);
	printf("\n Uppercase of string is : %s", str1);
	
	//Lowercase the string
	strlwr(str2);
	printf("\n Lowercase of string is : %s", str2);
	
	//Copy the string 
	strcpy(str3, str2);
	printf("\n The copy of string is : %s", str3);
	
	//Concate the string
	strcat(str1, str2);
	printf("\n Concate of string is : %s", str1);
}

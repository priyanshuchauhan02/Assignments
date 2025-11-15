#include<stdio.h>
main(){
	char name[10], len=0;
	printf("\n Enter your name : ");
	scanf("%s", name);
	printf("\n Name = %s", name);
	
	while(name[len] != 0){
		len++;
	}
	printf("\n Length of string = %d", len);
}

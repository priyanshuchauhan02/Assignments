#include<stdio.h>
main(){
	char x;
	printf("\nEnter a character: ");
	scanf("%c", &x);
	if((x>='a' && x<='z') || (x>='A' && x<='Z')){
		printf("\n%c is an alphabet",x);
	}
	else if(x >= '0' && x <= '9'){
		printf("\n%c is a digit",x);
	}
	else{
		printf("\n%c is a special character",x);
	}
}

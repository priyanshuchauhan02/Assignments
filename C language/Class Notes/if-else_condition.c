#include<stdio.h>
/*
if(condition){
	// block of code
}
else{
	// block of code
}
*/
main(){
	int num;
	printf("\n Enter the num: ");
	scanf("%d", &num);
	if(num > 0){
		printf("\n Number is positive");
	}
	else{
		printf("\n Number is negative");	
	}
}


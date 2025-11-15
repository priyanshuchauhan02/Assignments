#include<stdio.h>

/*
if(condition){
	// block of code
}
*/
main(){
	int num;
	printf("\n Enter the num: ");
	scanf("%d", &num);
	if(num > 0){
		printf("\n Square of %d = %d", num, num*num);
	}
}

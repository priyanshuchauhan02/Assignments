#include<stdio.h>
main(){
	int num1, num2;
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num1, &num2);
	if(num1 > num2){
		printf("\nThe entered number %d is greater than %d", num1, num2);
	}
	else if(num2 > num1){
		printf("\nThe entered number %d is greater than %d", num2, num1);
	}
}

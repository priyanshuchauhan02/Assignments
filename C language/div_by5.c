#include<stdio.h>
main(){
	int num;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	if(num % 5 == 0){
		printf("\nEnterd number %d is divisible by 5", num);
	}
}

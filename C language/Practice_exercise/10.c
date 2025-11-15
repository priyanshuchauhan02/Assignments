#include<stdio.h>
main(){
	int x;
	printf("\nEnter a year: ");
	scanf("%d", &x);
	if(x % 4 == 0 && x % 100 !=0){
		printf("\nEntered year %d is a leap year", x);
	}
}

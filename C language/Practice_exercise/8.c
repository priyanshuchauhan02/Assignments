#include<stdio.h>
main(){
	int x;
	printf("\nEnter a number: ");
	scanf("%d", &x);
	if(x % 2 == 0){
		printf("\n%d is even number", x);
	}
}

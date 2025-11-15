#include<stdio.h>
main(){
	float x;
	printf("\nEnter a number: ");
	scanf("%f", &x);
	if(x == 0){
		printf("\n%f is zero number", x);
	}
	else {
		printf("\n%f is non zero number", x);
	}
}

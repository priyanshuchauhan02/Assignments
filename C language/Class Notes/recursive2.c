#include<stdio.h>
main(){
	int fact=1, i;
	for(i=1; i<=5; i++){
		fact*= i;
	}
	printf("\n Fact = %d",fact);
}

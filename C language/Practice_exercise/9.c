#include<stdio.h>
main(){
	int x;
	printf("\nEnter an age: ");
	scanf("%d", &x);
	if(x >= 18){
		printf("\n%d is eligible age to vote.", x);
	}
}

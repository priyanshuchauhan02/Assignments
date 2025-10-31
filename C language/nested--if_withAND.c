#include<stdio.h>
/*
	if(cond1){
		// block of code
 	}
 	else if(cond2){
 		// block of code
 	}
 	else if(cond3){
 		// block of code
 	}
 	else{}
*/
main(){
	int a,b,c;
	printf("\n Enter the value of a,b,c : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && a>c){
		printf("\n a is max");
	}
	else if(b>a && b>c){
		printf("\n b is max");
	}
	else{
		printf("\n c is max");
	}
}

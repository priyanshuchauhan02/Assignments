#include<stdio.h>
/*
	if(cond1){
		if(cond2){
		// block of code
		}
	}
*/
main(){
	int a,b,c;
	printf("\n Enter the value of a,b,c : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b){
		if(a>c){
			printf("\n a is max");
		}
		else{
			printf("\n c is max");
		}
	}
	else if(b>a){
		if(b>c){
			printf("\n b is max");
		}
		else{
			printf("\n c is max");
		}
	}
	else{
		printf("\n c is max");
	}
}

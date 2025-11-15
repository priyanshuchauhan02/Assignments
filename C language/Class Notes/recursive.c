#include<stdio.h>
int factFind(int num){
	int f;
	if(num==0 || num==1){
		return;
	}
	f = num*factFind(num-1);
	return f;
}

main(){
	printf("\n Fact = %d", factFind(4));
}

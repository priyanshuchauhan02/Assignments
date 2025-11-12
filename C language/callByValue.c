#include<stdio.h>
void swap(int a, int b){
	int temp;
	a = temp;
	a = b;
	b = temp;
}

main(){
	int a=10, b=20;
	swap(a,b);
	printf("\n After swapping a=%d & b=%d", a, b);
}

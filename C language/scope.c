#include<stdio.h>
int a=10;	//Global variable
void test(int m){	//Formal parameter
	printf("\n in function a=%d",a);
	printf("\n m=%d",m);
}

main(){
	{
	int x=10;	//Local variable
	printf("\n x=%d",x);
	printf("\n in local block a=%d",a);
	}
	printf("\n in main block a=%d",a);
	test(12);
}

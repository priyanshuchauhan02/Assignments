#include<stdio.h>
main(){
	int num,sum=0;
	for(num=1; num<=20; num++){
		sum = sum + num;
	}
	printf("\nSum of first 20 numbers : %d", sum);
}

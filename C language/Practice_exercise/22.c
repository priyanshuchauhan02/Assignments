#include<stdio.h>
main(){
	int i, num;
	printf("\nEnter the number : ");
	scanf("%d", &num);
	
	for(i=num-1; i>=1 ;i--){
		num = num*i;
	}
	printf("\nFactorial = %d", num);
}

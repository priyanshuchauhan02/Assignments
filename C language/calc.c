#include <stdio.h>
main(){
	int num1, num2;
	float num;
	printf("**********************************");
	printf("\n* ==========CALCULATOR========== *");
	printf("\n**********************************");
	printf("\n*                                *");
	printf("\n Enter two numbers:");
	scanf("%d %d", &num1,&num2);
	printf("\n* Addition: %d                   *", num1 + num2);
	printf("\n* Substrcation: %d                *", num1 - num2);
	printf("\n* Multiplication:%d              *", num1 * num2);
	num = num1/num2;
	printf("\n* Division:%f              *", num);
	printf("\n* Modulo: %d                      *", num1 % num2);
	printf("\n*                                *");
	printf("\n**********************************");
}

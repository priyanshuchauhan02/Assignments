#include<stdio.h>
/*
	switch(choice){
	case1:
		// block of code
	break;
	case2:
		// block of code
	break;
	case3:
		// block of code
	break;
	default:
		printf("wrong choice");
	break;
*/
main(){
	int a,b;
	char choice;
	printf("\n Press '+' for add");
	printf("\n Press '-' for sub");
	printf("\n Press '*' for mul");
	printf("\n Press '/' for div");
	printf("\n Enter the choice : ");
	scanf("%c", &choice);
	printf("\n Enter the value of a and b : ");
	scanf("%d %d", &a, &b);
	
	switch(choice){
		case'+':
			printf("\n Addition of %d and %d = %d", a,b,a+b);
			break;
		case'-':
			printf("\n Subtraction of %d and %d = %d", a,b,a-b);
			break;
		case'*':
			printf("\n Multiplication of %d and %d = %d", a,b,a*b);
			break;
		
		case'/':
			printf("\n Division of %d and %d = %d", a,b,a/b);
			break;
		default:
			printf("\n wrong choice entered.");
			break;
	}
}


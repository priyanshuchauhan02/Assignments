#include<stdio.h>
main(){
	int age;
	printf("\nEnter an age: ");
	scanf("%d", &age);
	if(age>=0 && age<=12){
		printf("\n%d is a child.", age);
	}
	else if(age>=13 && age<=19){
		printf("\n%d is a teenager.", age);
	}
	else if(age>=20 && age<=64){
		printf("\n%d is an adult.", age);
	}
	else{
		printf("\n%d is a senior.", age);
	}
}

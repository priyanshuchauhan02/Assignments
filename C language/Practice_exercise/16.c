#include<stdio.h>
main(){
	float a,b,c;
	printf("\nEnter the three edges of triangle: ");
	scanf("%f %f %f", &a, &b, &c);
	if((a+b>c) && (a+c>b) &&(b+c>a)){
		printf("\nThe Triangle is valid.");
		
		if(a==b && b==c){
			printf("\n\nThe Triangle is an Equilateral triangle.");
		}
		else if(a==b || b==c || c==a){
			printf("\n\nThe Triangle is an Isosceles triangle.");
		}
		else{
			printf("\n\nThe Triangle is Scalene triangle.");
		}
	}
	else{
		printf("\n\nThe Triangle is not valid.");
	}
}

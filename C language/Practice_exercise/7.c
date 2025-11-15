#include <stdio.h>
main(){
	float r, l, b;
	printf("\nEnter the radius: ");
	scanf("%f", &r);
	printf("\nArea of square: %f", r * r);
	printf("\n\nEnter the value of l and b: "); //here l and b are length & bredth 
	scanf("%f %f", &l ,&b);
	printf("\nArea of rectangle: %f", l * b);
}

#include <stdio.h>
main(){
	float p, r, n, SI;
	printf("\n Enter the principle amount: ");
	scanf("%f", &p);
	printf("\n Enter the annual rate of interest: ");
	scanf("%f", &r);
	printf("\n Enter the time period: ");
	scanf("%f", &n);
	SI = (p * r * n) / 100;
	printf("\n Simple Interest: %f", SI);
}

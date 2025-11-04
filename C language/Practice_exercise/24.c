#include<stdio.h>
main(){
	    int i, e_sum = 0, o_sum = 0;

    for(i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            e_sum = e_sum + i;   
        } else {
            o_sum = o_sum + i;     
        }
    }
	printf("Sum of even digits = %d\n", e_sum);
    printf("Sum of odd digits = %d\n", o_sum);
}

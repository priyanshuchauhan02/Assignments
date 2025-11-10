	#include<stdio.h>
main() {
    int i, j, k;
    
    // Upper triangle    
    for(i = 1; i <= 5; i++) {
        for(k = 1; k < i; k++) {     
            printf(" ");
        }
        for(j = 5; j >= i; j--) {    
            printf("* ");
        }
        printf("\n");
    }

    // Lower triangle
    for(i = 2; i <= 5; i++) {       
        for(k = 5; k > i; k--) {     
            printf(" ");
        }
        for(j = 1; j <= i; j++) {    
            printf("* ");
        }
        printf("\n");
    }
}


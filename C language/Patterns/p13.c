#include<stdio.h>
main(){
	int n = 5,i,j,k;  

	// FOR upper triangle
    for (i = 1; i <= n; i++) {        
        for (k = i; k < n; k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i){
                printf("* ");
			}else{
                printf("  ");
        }
    }
        printf("\n");
	}
		
	// FOR lower triangle	
	for (i = n-1; i >= 1; i--){        
        for (k = i; k < n; k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i){
                printf("* ");
			}else{
                printf("  ");
        }
    }
        printf("\n");
	}
}

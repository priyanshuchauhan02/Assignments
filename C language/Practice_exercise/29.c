#include<stdio.h>
main(){
	int a[2][2], b[2][2], c[2][2], i, j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("\nEnter a[%d][%d] : ", i, j, a[i][j]);
			scanf("%d", &a[i][j]);
		}
	}
	
		for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("\nEnter b[%d][%d] : ", i, j, b[i][j]);
			scanf("%d", &b[i][j]);
		}
	}
	
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				c[i][j] = a[i][j] + b[i][j];
		}
	}
	
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				if(c[i][j]%2==0){
				printf("c[%d][%d] = %d	", i, j, c[i][j]);
			}
		}
		
		printf("\n");
	}
}

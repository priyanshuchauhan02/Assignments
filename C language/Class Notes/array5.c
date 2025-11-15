#include<stdio.h>
main(){
	int a[2][2] = {12,24,36,48};
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("a[%d][%d] = %d	", i, j, a[i][j]);
		}
		printf("\n");
	}
}

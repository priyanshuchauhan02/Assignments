#include<stdio.h>
main(){
	char color;
	printf("\nR for Red");
	printf("\nY for Yellow");
	printf("\nG for Green");
	printf("\n\nEnter traffic light color: ");
    scanf("%c", &color); 
	
	switch(color){
		case'R':
			printf("\nRed means STOP!!");
			break;
		case'Y':
			printf("\nYellow means GET READY!!");
			break;
		case'G':
			printf("\nGreen means GO!!");
			break;
		default:
			printf("\n Invalid color! Please enter R, Y, or G.");
			break;
	}
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input_int;
	
	printf("Input the second:");
	scanf("%i", &input_int);
	
	printf("The time is %i : %i",input_int/60,input_int%60);
	return 0;
}
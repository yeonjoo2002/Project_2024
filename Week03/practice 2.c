#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char C;
	int i;
	
	printf("input a number: ");
	scanf("%c", &C);
	
	i= C-'0';
	
	printf("The input number is %i \n",i);
	return 0;
}
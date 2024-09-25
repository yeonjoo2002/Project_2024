#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a;
	int b;
	
	float a_f;
	float b_f;
	float output;
	
	printf("enter two integers: ");
	scanf("%i , %i", &a, &b);
	
	a_f = (float) a;
	b_f = (float) b;
	output = a_f / b_f;
	
	printf("%f / %f = %f", a_f, b_f, output);
	return 0;
}
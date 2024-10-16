#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a,b;
	float fa, fb;
	
	printf("enter two integers:");
	scanf("%i %i", &a, &b);
	
	fa = (float) a;
	fb = (float) b;
	
	printf("%f / %f = %f", fa,fb,fa/fb);
	
	return 0;
}
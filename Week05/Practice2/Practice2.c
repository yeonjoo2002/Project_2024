#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	
	printf ("Input two integers: \n");
	scanf ("%i %i", &a, &b);
	
	printf("+ result is %i\n - result is %i\n * result is %i\n / result is %i\n %% result is %i\n", a+b , a-b, a*b, a/b, a%b);
	return 0;
}
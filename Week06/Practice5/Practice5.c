#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1,num2;
	char comp;
	
	printf("Enter the calculate:");
	scanf("%i %c %i", &num1, &comp, &num2);
	
	if (comp == '+')
		printf("= %i", num1+num2);
		
	else if (comp == '-')
		printf("= %i", num1-num2);
		
	else if (comp == '*')
		printf("= %i", num1*num2);
		
	else if (comp == '/')
		printf("= %i", num1/num2);
		
	return 0;
}
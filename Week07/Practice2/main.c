#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo (int a, int b)
{
	
	return (a+b);
}


int square (int n)
{
	return (n*n);	
}


int get_max (int x, int y)
{

	if (x<y) 
		return (y);
		
	else if (x>y)
		return (x);
}

int main() {
	
	int num1, num2;
	
	printf("Enter the integers:");
	scanf("%i %i", &num1, &num2);
	
	printf("Result - Sum: %i, Square: %i, Max: %i", sumTwo(num1,num2), square(num1), get_max(num1,num2));
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*int sumTwo (int a, int b)
{
	int output;
	output = a+b;
	return (output);  // return output 이랑 return (output)이랑 결과 같음
}

int main()
{
	int a,b;
	
	printf("Enter two numbers:");
	scanf("%i %i", &a, &b);

	
	printf("sum = %i", sumTwo(a,b));
	
	return 0;
}*/

int add (int x, int y)
{
	int output;
	
	x=5;
	y=7;
	
	output = x+y;
	
	return output;
}

int main ()
{
	
	printf("sum = %i", add(2,3));

	return 0;
}
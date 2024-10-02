#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input_year,a,b,c;
	
	printf("Input the year:");
	scanf("%i",&input_year);
	
	a = input_year % 4;
	b = input_year % 100;
	c = input_year % 400;
	
	
	if ((a==0 && b!=0) || c==0)
	{printf("Is the year %i the leap year? 1", input_year);
	}
	else 
	{printf("Is the year %i the leap year? 0", input_year);
	}
	 
	return 0;
}
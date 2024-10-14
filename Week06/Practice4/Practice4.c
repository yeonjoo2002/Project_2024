#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum=0;
	int num,i;
	
	printf("Enter a number:");
	scanf("%i", &num); // scanf 써도 되나?
	
	for (i=1; i<num+1; i++)
	{
		sum += i;
	}
	
	printf("The result is %i", sum);
	return 0;
}
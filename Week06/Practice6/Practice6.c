#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=50;
	int num;
	int i=0;
	
	do
	{
		printf("Guess a number:");
		scanf("%i", &num);
		
		i++;
		
		if (num>answer)
			printf("High!\n");
		
		else if (num<answer)
			printf("Low!\n");
			
		else
		{
			break;
		}	
	}
	
	while (num!=answer);
	
	printf("Congratulation! Trials: %i", i);
	return 0;
}
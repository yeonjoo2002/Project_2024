#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];
 
	printf("enter the scores of five people. \n");

    for(i=0; i<SIZE; i++)
        scanf("%d", &grade[i]);

    for(i=0; i<SIZE; i++)
        printf("grade[%d] = %d\n", i, grade[i]);

    return 0;
}




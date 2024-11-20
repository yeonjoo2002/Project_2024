#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	char word1[50], word2[50], word3[50];
	
	FILE *file;
	
	file = fopen("C:\\Users\\a\\Desktop\\sample.txt", "w");
	if (file == NULL) {
        printf("not open file \n");
        return ;
    }
    
    printf("input a word: ");
    scanf("%s", word1);
    printf("input a word: ");
    scanf("%s", word2);
    printf("input a word: ");
    scanf("%s", word3);
    
    fprintf(file, "%s\n", word1);
    fprintf(file, "%s\n", word2);
    fprintf(file, "%s\n", word3);
	
	fclose(file);
	
}
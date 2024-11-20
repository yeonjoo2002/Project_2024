#include <stdio.h>

void main(void) {
    FILE *file = NULL;
    char c;

     file = fopen("C:\\Users\\a\\Desktop\\sample.txt", "r");

    if (file == NULL) {
        return;
    }

    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    fclose(file);
}

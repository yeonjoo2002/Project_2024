#include <stdio.h>

/*void main(void) {
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
}*/



int main(void) {
    FILE *file = NULL;
    char str[256];

    file = fopen("C:\\Users\\a\\Desktop\\sample.txt", "r");

    if (file == NULL) {
        return 0;
    }

    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }

    fclose(file);

    return 0;
}

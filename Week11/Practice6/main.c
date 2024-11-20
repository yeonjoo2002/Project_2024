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
    int n = 100;

    file = fopen("C:\\Users\\a\\Desktop\\sample.txt", "r");

    if (file == NULL) {
        printf("not open\n");
        return 0;
    }

    while (fgets(str, n + 1, file) != NULL) {
        printf("%s", str);
    }

    fclose(file);

    return 0;
}


#include <stdio.h>

/*void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(void) {
    int a = 3, b = 5;
    swap(a, b);
    printf("a: %i, b: %i\n", a, b);
    return 0;
}
a : 3, b : 5*/


void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 3, b = 5;
    swap(&a, &b);
    printf("a: %i, b: %i\n", a, b);
    return 0;
}
// a : 5, b : 3

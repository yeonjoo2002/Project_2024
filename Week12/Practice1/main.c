#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;
    iptr = &i;

    char *cptr;
    cptr = &c;

    int *iptr2;
    iptr2 = iptr;

    printf("i : %p %p (size: %zu)\n", iptr, &i, sizeof(iptr));
    printf("c : %p %p (size: %zu)\n", cptr, &c, sizeof(cptr));
    printf("iptr2 : %p, %i\n", iptr2, *iptr2);

    return 0;
}

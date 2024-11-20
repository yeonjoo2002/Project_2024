#include <stdio.h>

int main(void) {
    int i;
    int grade[5];
    int sum = 0;
    int average;

    for (i = 0; i < 5; i++) {
        printf("Input value - grade[%d] = ", i);
        scanf("%d", &grade[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("grade[%d] = %d\n", i, *(grade + i));
        sum += *(grade + i);
    }

    average = sum / 5;
    printf("average = %i\n", average);

    return 0;
}

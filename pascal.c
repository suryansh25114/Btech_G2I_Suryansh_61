#include <stdio.h>

int main() {
    int i, j, n = 6, coef;

    for(i = 0; i < n; i++) {
        coef = 1;

        for(j = 0; j < n - i - 1; j++) { //spaces
            printf("  ");
        }

        for(j = 0; j <= i; j++) { //numbers
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
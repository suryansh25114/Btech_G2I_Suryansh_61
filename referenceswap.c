#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping:");
    printf("\nx = %d, y = %d", x, y);

    swap(&x, &y);

    printf("\nAfter swapping:");
    printf("\nx = %d, y = %d\n", x, y);

    return 0;
}
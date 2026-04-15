#include <stdio.h>

int main() {
    int n, i, j, k,a[10][10], b[10][10], sum[10][10], mul[10][10];
    printf("Enter order of matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Matrix Multiplication
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            mul[i][j] = 0;
            for(k = 0; k < n; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Sum of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
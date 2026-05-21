#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i, largest;

    arr = (int *)malloc(20 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 20 integers:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i = 1; i < 20; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest number = %d\n", largest);

    free(arr);

    return 0;
}
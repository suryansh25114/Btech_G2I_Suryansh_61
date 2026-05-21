#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n, i;
    long long factorial = 1;

    // Check if number is provided
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert command line argument to integer
    n = atoi(argv[1]);

    // Check for negative number
    if (n < 0) {
        printf("Factorial of negative number is not possible.\n");
        return 1;
    }

    // Calculate factorial
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;   // Discriminant

    switch(D > 0 ? 1 : (D == 0 ? 0 : -1)) {

        case 1:
            root1 = (-b + sqrt(D)) / (2*a);
            root2 = (-b - sqrt(D)) / (2*a);
            printf("Roots are real and distinct:\n");
            printf("Root1 = %f, Root2 = %f", root1, root2);
            break;

        case 0:
            root1 = -b / (2*a);
            printf("Roots are real and equal:\n");
            printf("Root = %f", root1);
            break;

        case -1:
            printf("Roots are imaginary (complex)");
            break;
    }

    return 0;
}
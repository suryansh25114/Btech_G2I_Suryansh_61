#include<stdio.h>

int main(){
    int r;
    printf("Enter radius :");
    scanf("%d",&r);

    float area,circumference;

    area = 3.14 * r * r;
    printf("The area of the circle is %f\n",area);

    circumference = 2 * 3.14 * r;
    printf("The circumference of the circle is %f\n",circumference);
    return 0;
}
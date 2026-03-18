#include<stdio.h>

int main(){
    float celsius,fahrenheit;
    printf("Enter celsius :");
    scanf("%f",&celsius);

    fahrenheit = (9*celsius)/5 + 32;
    printf("fahrenheit = %f\n",fahrenheit);
    return 0;
}
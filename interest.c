#include<stdio.h>
#include<math.h>

int main(){
    float t,r, p,a,compound_interest,simple_interest;
    printf("Enter principal amount :");
    scanf("%f",&p);

    printf("Enter rate of interest :");
    scanf("%f",&r);

    printf("Enter time :");
    scanf("%f",&t);

    simple_interest = (p*r*t)/100;
    printf("simple interest = %f\n",simple_interest);

    a = p*pow((1+r/100),t);
    compound_interest = a - p;
    printf("compound interest = %f\n",compound_interest);
    return 0;
}
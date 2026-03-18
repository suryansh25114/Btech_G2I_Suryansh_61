#include<stdio.h>

int main(){
    int a,b,c,d,e,sum;
    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    printf("Enter c :");
    scanf("%d",&c);

    printf("Enter d :");
    scanf("%d",&d);

    printf("Enter e :");
    scanf("%d",&e);

    sum = a + b + c + d + e;
    printf("sum = %d\n",sum);

    float percentage;
    percentage = sum/5;
    printf("percentage = %f\n",percentage);
    return 0;
}
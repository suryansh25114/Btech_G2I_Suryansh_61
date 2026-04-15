#include<stdio.h>

int main(){
    int n,r,num,sum = 0;
    printf("Enter a number :");
    scanf("%d",&n);

    num = n;

    while(n>0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("Sum of digit of a given number %d = %d",num,sum);
    return 0;
}
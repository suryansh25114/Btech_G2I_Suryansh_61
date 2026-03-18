#include<stdio.h>

int main(){
    int n,i,factorial;
    printf("Enter number :");
    scanf("%d",&n);

    factorial = 1;
    for(i = 1;i<=n;i++){
        factorial = factorial * i;
    }

    printf("The factorial of number %d = %d\n",n,factorial);

    return 0;
}
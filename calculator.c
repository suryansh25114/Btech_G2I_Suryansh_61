#include<stdio.h>

int main(){
    int a,b,r;
    char operator;
    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    printf("Enter operator :");
    scanf(" %c",&operator);

    switch(operator){
        case '+': r = a+b;
            printf("Addition = %d\n",r);
            break;
        case '-': r = a-b;
            printf("subtraction = %d\n",r);
            break;
        case '*': r = a*b;
            printf("multipication = %d\n",r);
            break;
        case '/': r = a/b;
            printf("division = %d\n",r);
            break;
    }
    return 0;
}
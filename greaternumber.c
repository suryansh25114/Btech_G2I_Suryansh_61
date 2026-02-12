#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    printf("Enter c :");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("a is greater than b and c\n");
    }
    else if(b>c && b>a){
        printf("b is greater than a and c\n");
    }
    else{
        printf("c is greater than a and b\n");
    }
    return 0;
}
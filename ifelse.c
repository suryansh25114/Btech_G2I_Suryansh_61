#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    if(a == b){
        printf("a is equal to b");
    }
    else{
        printf("a is not equal to b");
    }
    return 0;
}
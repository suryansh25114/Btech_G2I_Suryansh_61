#include<stdio.h>

int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("the given number is even \n");
    }
    else{
        printf("the given number is odd\n");
    }
    return 0;
}
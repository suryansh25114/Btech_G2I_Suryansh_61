#include<stdio.h>

int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

if(n%4 == 0 && n%100!=0){
        printf("This year is a leap year \n");
    }
    else if(n%100 == 0 && n%400 == 0){
        printf("This year is a leap year\n");
    }
    else{
        printf("This year is not a leap year \n");
    }
    return 0;
}
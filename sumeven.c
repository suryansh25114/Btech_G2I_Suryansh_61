#include<stdio.h>

int main(){
    int n,i,sumE,sumO;
    printf("Enter number :");
    scanf("%d",&n);

    sumE = 0,sumO = 0;
    for(i = 0;i<=n;i++){
        if(i%2==0){
            sumE += i;
        }
        else{
            sumO += i;
        }
    }
    printf("The sum of even number = %d\n",sumE);
    printf("The sum of odd number = %d\n",sumO);
    return 0;
}
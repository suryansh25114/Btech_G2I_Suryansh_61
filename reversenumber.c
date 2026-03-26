#include<stdio.h>

int main(){
    int n,r=0,q;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("The number is %d\n",n);

    printf("Reverse of the number is ");
    while(n!=0){
       q = n%10;
       r = r*10 + q;
       n = n/10;
    }
    printf("%d",r);
    return 0;
}
#include<stdio.h>

int main(){
    //binary to decimal
    int bin,deci=0,base=1,rem;
    printf("Enter a binary number :");
    scanf("%d",&bin);

    while(bin!=0){
        rem = bin % 10;
        deci = deci + rem * base;
        bin = bin / 10;
        base = base * 2;
    }

    printf("Decimal = %d\n",deci);

    //decimal to binary
    int n,binary[32],i=0;
    printf("Enter a decimal number :");
    scanf("%d",&n);

    while(n>0){
        binary[i]=n%2;
        n = n/2;
        i++;
    }

    printf("Binary :");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}
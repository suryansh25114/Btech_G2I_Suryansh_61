#include<stdio.h>

int main(){
    int n,s,d,t;
    printf("Armstrong number between 1 to 100:");
    for(n=1;n<=100;n++){
        t = n;
        s=0;
        while(t!=0){
            d = t%10;
            s = s + (d*d*d);
            t = t/10;
        }
        if(s==n){
            printf("%d",n);
        }
    }
    return 0;
}
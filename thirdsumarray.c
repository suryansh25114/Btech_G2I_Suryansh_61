#include<stdio.h>

int main(){
    int i,j,r,c,a[25][25],b[25][25],sum[25][25];
    printf("Enter the row and column :");
    scanf("%d%d",&r,&c);

    printf("Enter the elements of 1st array :");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of 2nd array :");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Third array :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",sum[i][j]);
        }
        printf(" \n");
    }
    return 0;
}
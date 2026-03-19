#include<stdio.h>

int main(){
    int i,j,r,c,a[25][25],sum = 0;
    printf("Enter the row and column : ");
    scanf("%d%d",&r,&c);

    printf("Enter the elements of array :");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("array :");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum = sum + a[i][j];
        }
    }

    printf("The sum of the array is %d",sum);

    return 0;
}
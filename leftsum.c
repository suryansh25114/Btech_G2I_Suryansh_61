#include<stdio.h>

int main(){
    int mat[25][25],i,j,n,left=0;
    printf("Enter the dimension of the matrix :");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("MATRIX 1 :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                left = left + mat[i][j];
            }
        }
    }
    printf("The sum of left diagonal element is %d",left);

    return 0;
}
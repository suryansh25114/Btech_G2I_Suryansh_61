#include<stdio.h>

int main(){
    int mat1[25][25],row,col,mat2[25][25],i,j;
    printf("Enter the row and column of matrix ");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of matrix");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("matrix 1:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix 1 :\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            mat2[j][i] = mat1[i][j];
        }
    }

    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
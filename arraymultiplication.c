#include<stdio.h>

int main(){
    int mat1[25][25],i,j,k,mat2[25][25],mat3[25][25],r1,r2,c1,c2,sum=0;
    printf("Enter the row and column of the matrix 1 :");
    scanf("%d%d",&r1,&c1);

    printf("Enter the row and column of the matrix 2 :");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("Multiplication is not possible !!");
    }
    else{
        printf("Enter the elements of matrix 1:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
            }
        }

        printf("Enter the elements of matrix 2:\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
            }
        }
        printf("matrix 1 :\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("\t%d",mat1[i][j]);
            }
            printf("\n");
        }

        printf("matrix 2 :\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                printf("\t%d",mat2[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                for(k=0;k<c1;k++){
                    sum = sum + mat1[i][k]*mat2[k][j];
                }
                mat3[i][j] = sum;
            }
        }

        printf("resultant matrix :\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("\t%d",mat3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
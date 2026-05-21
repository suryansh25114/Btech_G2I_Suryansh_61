#include<stdio.h>

int main(){
    int mat[25][25],i,j,m,n,sum=0;
    printf("Enter the dimension of the matrix :");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of the matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf("Entered matrix is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum = sum + mat[i][j];
            }
        }
    }

    printf("The sum of diagonal elements is %d",sum);
    
    return 0;
}
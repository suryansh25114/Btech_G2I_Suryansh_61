#include<stdio.h>

int main(){
    int a[100],n,i,j,temp,min;
    printf("Enter the size of elements of an array :");
    scanf("%d",&n);

    printf("Enter the elements in an array :\n");
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Sort an array using selection sort ");
    for(i = 0;i<n-1;i++){
        min = i;
        for(j = i+1;j<n;j++){
            if(a[min]>a[j]){
                min =  j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array :\n");
    for(i = 0;i<n;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}
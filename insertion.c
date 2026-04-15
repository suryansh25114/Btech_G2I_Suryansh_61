#include<stdio.h>

int main(){
    int n,i,j,temp,a[20];
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);

    printf("Enter elements :\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }

    for(i = 1;i<n;i++){
        temp = a[i];
        j = i - 1;
        while(j>=0 && temp<a[j]){
            a[j+1] = a[j];
            j = j - 1;
        }
    }

    printf("The sorted array :\n");
    for(i = 0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
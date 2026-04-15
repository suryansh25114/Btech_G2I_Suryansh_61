#include<stdio.h>

int main(){
    int n,i,item,a[20],count = 0;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    printf("Enter elements :");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the item to be searched :");
    scanf("%d",&item);
    for(i = 0;i < n;i++){
        if(a[i] == item){
            printf("%d is present at location %d\n",item,i+1);
            count++;
        }
    }

    if(count == 0){
        printf("%d is not present in the array \n",item);
    }
    else{
        printf("%d is present %d times in the array ",item,count);
    }
    return 0;
}
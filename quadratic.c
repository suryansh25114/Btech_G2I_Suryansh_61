#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float root1,root2;
    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    printf("Enter c :");
    scanf("%d",&c);

    if((pow(b,2)-4*a*c)>0){
        root1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        root2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("the roots are %f and %f\n",root1,root2);
    }
    else{
        printf("The roots are imaginary !!\n");
    }
    return 0;
}
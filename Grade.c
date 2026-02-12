#include<stdio.h>

int main(){
    int marks1,marks2,marks3,marks4,marks5,percentage;
    printf("Enter marks 1 :");
    scanf("%d",&marks1);

    printf("Enter marks 2 :");
    scanf("%d",&marks2);

    printf("Enter marks 3 :");
    scanf("%d",&marks3);

    printf("Enter marks 4 :");
    scanf("%d",&marks4);

    printf("Enter marks 5 :");
    scanf("%d",&marks5);

    percentage = (marks1+marks2+marks3+marks4+marks5)/5;
    printf("percentage = %d\n",percentage);
    if(percentage >100){
        printf("wrong input ");
    }
    else if(percentage >90 && percentage <=100){
        printf("grade A \n");
    }
    else if (percentage >80 && percentage <=90){
        printf("Grade B \n");
    }
    else if(percentage >60 && percentage <=80){
        printf("Grade C\n");
    }
    else{
        printf("Grade D\n");
    }
    return 0;
}
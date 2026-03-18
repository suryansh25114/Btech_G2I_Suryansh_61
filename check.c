#include<stdio.h>

int main(){
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("The given character is a alphabet !!\n");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("The given character is a digit !!\n");
    }
    else{
        printf("The given character is a special character !!\n");
    }
    return 0;
}
#include<stdio.h>

int main(){
    char alphabet;
    printf("Enter alphabet :");
    scanf("%c",&alphabet);

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
        printf("The given alphabet is a vowel !! \n");
    }
    else if(alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
        printf("The given alphabet is a vowel !! \n ");
    }
    else{
        printf("The given alphabet ia a consonant !!\n");
    }
    return 0;
}
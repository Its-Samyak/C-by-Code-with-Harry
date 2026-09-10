#include<stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if((c>='a') && (c<='z')){
        printf("The character is Lower Case!");
    }
    else{
        printf("The character is Upper Case!");
    }
    return 0;
}
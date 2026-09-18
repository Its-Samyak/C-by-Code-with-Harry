#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    bool isPresent=false;
    char str[]="Samyak Jain";
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'){
            printf("Yes, a is present at index %d.\n",i);
            isPresent=true;
        }
    }
    if(!isPresent){
        printf("No, a is not present in the string.");
    }
    return 0;
}
#include<stdio.h>
int strlen(char string[]){
    int i=0;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char string[30]="Samyak Jain";
    
    printf("Length of String : %d",strlen(string));
    return 0;
}
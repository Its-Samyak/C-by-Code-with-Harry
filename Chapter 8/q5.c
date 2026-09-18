#include<stdio.h>
int mystrlen(char string[]){
    int i=0;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}
void mystrcpy(char string[],char str[]){
    for(int i=0;i<mystrlen(string);i++){
        str[i]=string[i];
    }
    str[mystrlen(string)]='\0';
}
int main(){
    char string[30]="Samyak Jain";
    char str[30];
    printf("%s\n",string);
    mystrcpy(string,str);
    printf("%s\n",str);
    return 0;
}
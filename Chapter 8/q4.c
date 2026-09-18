#include<stdio.h>
char* slice(char string[],int m,int n){
    char *ptr=&string[m];
    string[n]='\0';
    string=ptr;
    return string;
}
int main(){
    char string[30]="Samyak Jain";
    printf("%s\n",string);
    printf("%s",slice(string,3,9));
    return 0;
}
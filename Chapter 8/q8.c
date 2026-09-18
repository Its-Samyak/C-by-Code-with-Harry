#include<stdio.h>
#include<string.h>
int main(){
    int c=0;
    char str[]="Samyak Jain";
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'){
            c+=1;
        }
    }
    printf("%d\n",c);
    
    return 0;
}
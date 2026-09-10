#include<stdio.h>
int main(){
    int a=10,b=4,c=200,d=30;
    if (a>b){
        if(a>c){
            if(a>d){
                printf("%d is greatest",a);
            }
            else{
                printf("%d is greatest",d);
            }
        }
        else{
            if(c>d){
                printf("%d is greatest",c);
            }
            else{
                printf("%d is greatest",d);
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                printf("%d is greatest",b);
            }
            else{
                printf("%d is greatest",d);
            }
        }
        else{
            if(c>d){
                printf("%d is greatest",c);
            }
            else{
                printf("%d is greatest",d);
            }
        }
    }
    return 0;
}
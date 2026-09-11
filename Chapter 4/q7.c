#include<stdio.h>
int main(){
    int i=1,sum=0;
    for(i;i<=10;i++){
        sum+=i*8;
    }
    printf("Sum : %d",sum);
    return 0;
}
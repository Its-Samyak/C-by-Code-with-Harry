#include<stdio.h>
int main(){
    int i=1,sum=0;
    
    // do{
    //     sum+=i;
    //     i++;
    // }while(i<=10);

    for(i;i<=10;i++){
        sum+=i;
    }

    printf("Sum : %d",sum);
    return 0;
}
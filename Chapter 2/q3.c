#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n>0){if(n%97==0){
        printf("The number is divisible by 97");
    }
    else {
        printf("The number is not divisible by 97");
    }}
    else{
        printf("Enter valid number!");
    }
    return 0;
}
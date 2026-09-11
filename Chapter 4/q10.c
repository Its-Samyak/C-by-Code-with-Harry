#include<stdio.h>
#include<stdbool.h>
int main(){
    bool isPrime=true;
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid number!");
    }
    if(n==1){
        printf("Neither prime nor composite");
    }
    if(n>1){for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime){
        printf("Prime number");
    }
    if(!isPrime){
        printf("Not a Prime number");}
    
    }
    return 0;
}
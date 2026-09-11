#include<stdio.h>
#include<stdbool.h>
int main(){
    bool isPrime=true;
    int n,i=2;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid number!");
    }
    if(n==1){
        printf("Neither prime nor composite");
    }
    if(n>1){
        while(i<n){
        if(n%i==0){
            isPrime=false;
        }
        i++;
    }
    if(isPrime){
        printf("Prime number");
    }
    if(!isPrime){
        printf("Not a Prime number");}
    
    }
    return 0;
}


// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     bool isPrime=true;
//     int n,i=2;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     if(n<=0){
//         printf("Invalid number!");
//     }
//     if(n==1){
//         printf("Neither prime nor composite");
//     }
//     if(n>1){
//         do{
//         if(n%i==0){
//             isPrime=false;
//         }
//         i++;
//     }while(i<n);
    
//     if(isPrime){
//         printf("Prime number");
//     }
//     if(!isPrime){
//         printf("Not a Prime number");}
    
//     }
//     return 0;
// }

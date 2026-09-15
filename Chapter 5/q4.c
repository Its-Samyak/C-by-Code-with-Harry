#include<stdio.h>
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter natural number : ");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}

// 0 1 1 2 3 5 8 13 21 34 55 89........
// 1 2 3 4 5 6 7 08 09 10 11 12........
// fib(n)=fib(n-1)+fib(n-2)
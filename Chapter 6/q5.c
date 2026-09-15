#include<stdio.h>
float sum(int *a,int *b){
    return *a + *b;
}
float average(int *a,int *b){
    return (*a+*b)/2;
}
int main(){
    int a =10;
    int b=100;
    printf("Sum of %d and %d is %.1f\n",a,b,sum(&a,&b));
    printf("Average of %d and %d is %.1f\n",a,b,average(&a,&b));
    return 0;
}
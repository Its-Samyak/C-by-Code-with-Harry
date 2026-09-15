#include<stdio.h>

float average(int,int,int);

int main(){
    printf("Average : %.1f",average(9,9,9));

    return 0;
}
float average(int a,int b,int c){
    return (a+b+c)/3.0;
}
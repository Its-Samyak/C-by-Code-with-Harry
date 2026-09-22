#include<stdio.h>
typedef struct vector{
    int i;
    int j;
}vec;
int main(){
    vec vector1={2,-1};
    printf("Vector is %di + %dj\n",vector1.i,vector1.j);
    printf("Vector is %di + %dj\n",vector1);
}
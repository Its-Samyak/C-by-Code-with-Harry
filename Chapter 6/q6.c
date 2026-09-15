#include<stdio.h>
int main(){
    int i =10;
    int* j=&i;
    int** k=&j;
    printf("Value of i is %d\n",i);
    printf("Value of i is %d\n",*j);
    printf("Value of i is %d\n",**k);
}
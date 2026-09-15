#include<stdio.h>
int main(){
    int table5[10];
    for (int i=0;i<10;i++){
        table5[i]=5*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d ",table5[i]);
    }
}
#include<stdio.h>
int counter(int* n,int x){
    int count=0;
    for(int i=0;i<x;i++){
        if(n[i]>0) count++;
    }
    return count;
}
int main(){
    int array[]={-12,0,6,7,89,-20};
    printf("No of positive numbers in the array are %d",counter(array,sizeof(array)/sizeof(array[0])));
    return 0;
}
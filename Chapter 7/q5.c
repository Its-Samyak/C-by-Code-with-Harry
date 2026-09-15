#include<stdio.h>
void reverser(int* arr,int n){
    int a[n];
    for(int i=0;i<n;i++){
            a[n-1-i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=a[i];
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverser(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
#include<stdio.h>
int main(){
    int arr1[]={20,40,60,80,100,120,140,160,180,200};
    int* ptr=arr1;
    printf("The value at index 0 is %d\n",*ptr);
    printf("The value at index 2 is %d",*(ptr+2));
    return 0;
}
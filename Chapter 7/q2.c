#include<stdio.h>
int main(){
    int S[3]={20,40,60};
    printf("The value at index 0 is %d\n",*S);
    printf("The value at index 2 is %d",*(S+3));
    return 0;
}
// false as it refers to the fourth element
// S+2 is for third element
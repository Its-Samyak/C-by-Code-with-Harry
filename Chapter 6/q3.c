#include<stdio.h>
void tenx(int *a){
    *a *=10;
}
int main(){
    int a =10;
    printf("Value of a is %d\n",a);
    tenx(&a);
    printf("Value of a is %d\n",a);
    
    return 0;
}
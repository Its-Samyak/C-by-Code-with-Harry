#include<stdio.h>
int function(int a){
    printf("%p\n",&a);
}
int main(){
    int i =10;
    printf("%p\n",&i);
    function(i);
    return 0;
}
// no because variables are of different scope - global and local scope
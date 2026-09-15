#include<stdio.h>
float forcecalculator(int mass){
    return mass*9.8;
}
int main(){
    int mass;
    printf("Enter mass : ");
    scanf("%d",&mass);
    printf("Force exertion on the body by gravity is %.1fN",forcecalculator(mass));
    return 0;
}
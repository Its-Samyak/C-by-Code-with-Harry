#include<stdio.h>
int main(){
    float a ,b;
    printf("Enter the length of the rectangle : ");
    scanf("%f",&a);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&b);
    float area=a*b;
    printf("Area of Rectangle is %.2f",area);
    return 0;
}
#include<stdio.h>
int main(){
    float p,r,t,interest;
    printf("Enter the principal amount : ");
    scanf("%f",&p);
    printf("Enter the rate : ");
    scanf("%f",&r);
    printf("Enter the time : ");
    scanf("%f",&t);
    interest=(p*r*t)/100.0;
    printf("Principal Interest : %.2f rupees",interest);
    return 0;
}
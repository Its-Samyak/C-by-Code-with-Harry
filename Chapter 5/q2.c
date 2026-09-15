#include<stdio.h>

float convertor(int celsius){
    return ((9.0/5.0)*celsius)+32;
}
int main(){
    float celsius,fahrenheit;
    printf("Enter celsius value : ");
    scanf("%f",&celsius);
    
    printf("Temperature in fahrenheit is %.2f",convertor(celsius));
    return 0;
}
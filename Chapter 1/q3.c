#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter celsius value : ");
    scanf("%f",&celsius);
    fahrenheit=((9.0/5.0)*celsius)+32;
    printf("Temperature in fahrenheit is %.2f",fahrenheit);
    return 0;
}
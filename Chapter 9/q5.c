#include <stdio.h>

typedef struct complexNumber
{
    int a;
    int b;
} complex;

int main()
{
    complex a={2,3};
    
    printf("Complex number is %d + %di",a);
}
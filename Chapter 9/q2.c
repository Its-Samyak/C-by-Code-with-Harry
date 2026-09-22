#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
} vec;

vec sumVector(vec* a,vec* b)
{
    vec *ptr1=a;
    vec *ptr2=b;
    vec sum;
    sum.i=ptr1->i+ptr2->i;
    sum.j=ptr1->j+ptr2->j;
    return sum;
}

int main()
{
    vec a={2,3};
    vec b={1,3};
    
    printf("Sum of vector is %di + %dj",sumVector(&a,&b));
}
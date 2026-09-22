
#include <stdio.h>

typedef struct complexNumber
{
    int a;
    int b;
} complex;
void display(complex* arr){
    printf("Complex Numbers are :\n");
    for(int i=0;i<5;i++){
        printf("%d + %di\n",arr[i]);
}
}
int main()
{
    int a, b;
    complex arr[5];

    for (int i = 1; i <= 5; i++)
    {
        if (i == 1)
        {
            printf("Enter %dst Complex Number\n", i);
        }
        else if (i == 2)
        {
            printf("Enter %dnd Complex Number\n", i);
        }
        else if (i == 3)
        {
            printf("Enter %drd Complex Number\n", i);
        }
        else{
            printf("Enter %dth Complex Number\n",i);
        }
        printf("Enter real part : ");
        scanf("%d", &a);
        printf("Enter imaginary part : ");
        scanf("%d", &b);
        printf("\n");
        arr[i - 1].a = a;
        arr[i - 1].b = b;
    }
    display(arr);
    // printf("Complex Numbers are :\n");
    // for(int i=0;i<5;i++){
    //     printf("%d + %di\n",arr[i]);
    // }
}
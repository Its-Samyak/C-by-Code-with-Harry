#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    int n;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter number : ");
        scanf("%d",&n);
        ptr[i] = n;
    }
    printf("The numbers are :\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(10 ,sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = (i+1)*7;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 10; i < 15; i++)
    {
        ptr[i] = (i+1)*7;
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}
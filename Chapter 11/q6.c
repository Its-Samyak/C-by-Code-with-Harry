#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5 ,sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("\n");
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
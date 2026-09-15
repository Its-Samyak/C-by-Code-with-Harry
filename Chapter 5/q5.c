#include <stdio.h>
int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

// 4 5 5
//Never modify a variable more than once within a single expression, and avoid reading and modifying the same variable within one expression.

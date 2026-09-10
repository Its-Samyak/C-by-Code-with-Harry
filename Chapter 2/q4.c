// 3*x/y-z+k
// 3*2/3-3+1
// 6/3-3+1
// 2-3+1
// -1+1
// 0 (ans)
#include <stdio.h>
int main()
{
    // int x,y,z,k;

    int x = 2, y = 3,

        z = 3,

        k = 1;
    int ans = 3 * x / y - z + k;
    printf("%d", ans);
    return 0;
}
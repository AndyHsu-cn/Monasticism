#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int * p = a;
    printf("%d\n", sizeof(a) / sizeof(*a));
    printf("%d\n", sizeof(p) / sizeof(*a));     // p和a并不总是等价
    return 0;
}
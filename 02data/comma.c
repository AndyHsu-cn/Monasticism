#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;

    i = (10, 9, j = 4);
    printf("i = %d\n", i);
    return 0;
}
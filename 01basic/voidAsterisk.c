#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int * pa = malloc(sizeof(int));
    *pa = 10;
    printf("pa = %d\n", *pa);
    return 0;
}
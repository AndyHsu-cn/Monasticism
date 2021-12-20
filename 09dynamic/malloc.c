#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int * p = malloc(sizeof(int));
    *p = 10;
    printf("p = %p, *p = %d\n", p, *p);
    free(p);
    // p = NULL;
    // free只代表解除了指针对一段空间的合法访问，所以free后置NULL是个好习惯

    *p = 20;
    printf("p = %p, *p = %d\n", p, *p);
    return 0;
}
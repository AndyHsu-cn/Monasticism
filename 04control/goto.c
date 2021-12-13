#include <stdio.h>
#define MAX 100

int main(void)
{
    int i = 1;
    int sum = 0;

loop:
    sum += i;
    i++;
    if(i <= MAX)
        goto loop;
    
    printf("sum = %d\n", sum);
    return 0;
}
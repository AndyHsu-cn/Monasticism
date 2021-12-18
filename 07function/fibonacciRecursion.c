#include <stdio.h>
int fibonacci(int n){
    if(n==1 || n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main(void)
{
    int n;
    int res;

    scanf("%d", &n);
    res = fibonacci(n);
    printf("fibonacci[n] = %d\n", res);
    return 0;
}
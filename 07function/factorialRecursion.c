#include <stdio.h>
int fac(int n){
    if(n==1 || n==0)
        return 1;
    else
        return n * fac(n-1);
}

int main(void)
{
    int n;
    int res;

    scanf("%d", &n);
    res = fac(n);
    printf("%d! = %d\n", n, res);
    return 0;
}
#include <stdio.h>

int main(void)
{
    /*
        参数数量可变，导致编译器无法检查函数调用的正误
        printf("%d %d\n", 10);
        printf("%d\n", 10, 20.5);
    */
    printf("%d %d\n", 20, sizeof(long long));
    return 0;
}
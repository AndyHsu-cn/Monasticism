#include <stdio.h>

int main(void)
{
    const float pi = 3.14;

    // 下面这条语句是error
    // pi = 3.14159;

    // 下面这条语句是warning，但是其实已经是error了
    float * fp = &pi;
    *fp = 3.14159;
    printf("%f\n", pi);
    return 0;
}
#include <stdio.h>

int main(void)
{
    double dl = 0.0;
    int ch = 0;

    scanf("%lf ", &dl);         // 注意：最后的空格会匹配scanf后的所有空白符 

    ch = getchar();
    printf("dl = %lf, ch = %d\n", dl, ch);
    return 0;
}
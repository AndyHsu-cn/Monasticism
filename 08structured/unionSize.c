#include <stdio.h>

union size_un{
    int i;
    float f;
    double d;
    char ch;
};
int main(void)
{
    union size_un a;
    a.ch = 'f';
    printf("%c %d\n", a.ch, sizeof(a));
    return 0;
}
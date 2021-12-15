#include <stdio.h>
#include <string.h>
#define DES_LEN 7

int main(void)
{
    char des[DES_LEN];

    strcpy(des, "hi");
    puts(des);
    // Error strcpy(des, "hello world");
    // puts(des);
    // ERROR strcat(des, "world");
    // puts(des);
    return 0;
}
#include <stdio.h>
#include <string.h>
#define DES_LEN 8

int main(void)
{
    char des[DES_LEN] = "Hi, ";

    // ERROR strncpy(des, "hello world", 8);
    strncat(des, "hello world", sizeof(des) - strlen(des) - 1);
    puts(des);
    return 0;
}
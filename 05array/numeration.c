#include <stdio.h>
#define INT_BITS 32

int main(void)
{
    int num, base;
    int arr[INT_BITS];
    int i = 0;

    printf("Please enter the converted num: ");
    scanf("%d", &num);
    printf("Please enter the base: ");
    scanf("%d", &base);

    do
    {
        arr[i] = num % base;
        num /= base;
        i++;
    } while (num != 0);

    for ( i--; i>=0; i--)
    {
        if(arr[i] > 9)
            printf("%c", arr[i]-10+'A');
        else        
            printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
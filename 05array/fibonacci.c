#include <stdio.h>
#define LIMIT 10

int main(void)
{
    int sequence[LIMIT] = {1, 1};
    int i;

    for (i = 0; i < LIMIT; i++){
        if(i >= 2)
            sequence[i] = sequence[i-1]+sequence[i-2]; 
        printf("sequence[%d] = %d\n", i+1, sequence[i]);
    }
    
    return 0;
}
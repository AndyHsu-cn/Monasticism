/**
 * Eratosthenes法求质数
*/

#include <stdio.h>
#include <math.h>
#define N 200

int main(void)
{
    int primer[N+1] = {0};
    int divisor;
    int i;
    int count = 0;

    for(divisor=2; divisor<=sqrt(N); divisor++)
    {
        if(primer[divisor] == 0)
            for(i=2*divisor; i<= N; i+=divisor)
                primer[i] = -1;
    }

    for(i=2; i<=N; i++)
    {
        if(primer[i] == 0)
        {
            ++count;
            printf("%3d ", i);
            if(count%10 == 0)
                printf("\n");
        }
    }
    printf("\n");
    return 0;
}
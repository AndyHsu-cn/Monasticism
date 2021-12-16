#include <stdio.h>
#include <string.h>
#define ARR_SIZE 5

int main(void)
{
    int i, j;
    int min_index;
    char *name[ARR_SIZE] = {"Follow me", "Basic", "Great", "Fortran", "Computer"};
    char * tmp;

    for ( i = 0; i < ARR_SIZE; i++)
        puts(name[i]);
    
    // 选择排序法 - 升序
    for ( i = 0; i < ARR_SIZE-1; i++)
    {
        min_index = i;
        for ( j = i+1; j < ARR_SIZE; j++)
        {
            if(strcmp(name[min_index], name[j]) > 0 )
                min_index = j;
        }
        if(min_index != i){
            tmp = name[min_index];
            name[min_index] = name[i];
            name[i] = tmp;
            #if 0
            strcpy(tmp, name[min_index]);
            strcpy(name[min_index], name[i]);
            strcpy(name[i], tmp);
            #endif
        }
    }

    for ( i = 0; i < ARR_SIZE; i++)
        puts(name[i]);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int score = 0;
    printf("Enter your score: ");
    if(scanf("%d", &score) == 1){
        if(score>=0 && score<=100){
            switch (score / 10)
            {
                case 10:
                case 9: puts("A"); break;
                case 8: puts("B"); break;
                case 7: puts("C"); break;
                case 6: puts("D"); break;
                default: puts("E"); break;
            }
        }
        else{
            fprintf(stderr, "data not in range!\n");
        }
        
    }
    else{
        fprintf(stderr, "no valid data entered!\n");
        exit(1);
    }
    
    return 0;
}
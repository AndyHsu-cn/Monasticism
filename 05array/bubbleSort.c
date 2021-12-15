#include <stdio.h>
void showArr(int arr[], int num);

int main(void)
{
    int arr[] = {2, 4, 6, 1, 5, 3, 4};
    int i, j;
    int tmp;
    int flagExchange;
    int num = sizeof(arr)/sizeof(arr[0]);       // 元素个数

   showArr(arr, num);
    for ( i = 0; i < num-1; i++)
    {
        flagExchange = 0;
        for(j = 0; j < num-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flagExchange = 1;
            }
        }
        printf("第%d次冒泡：", i+1);
        showArr(arr, num);
        if(!flagExchange)
            break;
    }
    
    return 0;
}

void showArr(int arr[], int num){
    int i;
    for ( i = 0; i < num; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
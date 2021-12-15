#include <stdio.h>
void showArr(int arr[], int num);

int main(void)
{
    int arr[] = {2, 4, 6, 1, 5, 3, 4};
    int num = sizeof(arr)/sizeof(arr[0]);       // 元素个数
    int i, j;
    int index_min;
    int tmp;

    showArr(arr, num);
    for ( i = 0; i < num-1; i++)
    {
        index_min = i;
        for ( j = i+1; j < num; j++)
        {
            if(arr[j] < arr[index_min])
                index_min = j;
        }
        if(index_min != i){
            tmp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = tmp;
        }
        printf("第%d次选择：", i+1);
        showArr(arr, num);
    }
    
    return 0;
}

void showArr(int arr[], int num){
    int i;
    for ( i = 0; i < num; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
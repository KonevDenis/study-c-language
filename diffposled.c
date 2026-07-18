#include <stdio.h>
#include <stdlib.h>

int main(void){
    int capacity = 1;
    int size = 0;
    int *arr = malloc(capacity * sizeof(int));
    //int *ptr = arr;
    
    while (scanf("%d", &arr[size]) == 1 && arr[size] != -1)
    {
        size++;
        if (size == capacity)
        {
            capacity *= 2;
            arr = realloc(arr, capacity * sizeof(int));
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        printf("%d ",arr[size - i] );
    }
    


}
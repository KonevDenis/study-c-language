#include <stdio.h>
#define N 1000
int main(){
    int a[N];           // массив для N чисел
    int i;              // номер текущей ячейки
    int n;
    int k;              // сколько чисел дано

    scanf("%d", &n);
    // читаем n чисел в массив a
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    // печатаем числа
    for(i=0; i < n; i++) {
        if (a[i] == k)
        {
            /* code */
        printf("%d", i);
            return 0;
        
        }
        
    }
    printf("\n");
    return 0;
}
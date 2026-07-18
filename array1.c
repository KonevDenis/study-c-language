#include <stdio.h>

int main(){
    int a[5];            // коробка с ячейками
    int i;               // номер текущей ячейки
    for(i = 0; i < (int)(sizeof(a)/sizeof(a[0])); i++){
        scanf("%d", &a[i]);
    }
        for(i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}
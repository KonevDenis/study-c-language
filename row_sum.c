#include <stdio.h>
int sum_row(int a[3][3], int irow);
int main(void){
int a[3][3];
int irow = 0;

printf("%d",sum_row(a, irow) );
}

int sum_row(int a[3][3], int irow){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
        for (int j = 0; j < 3; j++)
        {
            irow += a[1][j];
        }
        
    
    return irow;
    
}
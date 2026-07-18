#include <stdio.h>
#define N 3
int sum_col(int a[N][N], int icol);
int main(void){
int a[N][N];
int icol = 2;
printf("%d", sum_col(a, icol));

}
int sum_col(int a[N][N], int icol){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += a[i][icol];
        
    }
    return sum;
    
}
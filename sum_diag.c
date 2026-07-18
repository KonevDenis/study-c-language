#include <stdio.h>
#define N 3
int sum_diag(int a[N][N]);
int main(void){
int a[N][N];
printf("%d", sum_diag(a));

}
int sum_diag(int a[N][N]){
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
        for (int j = 0; j < N; j++)
        {
            if(i == j){
                sum += a[i][j];
            }
        }
                
    }
    return sum;
    
}
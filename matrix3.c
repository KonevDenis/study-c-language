#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void matrix3(int n, int matrix[n][n]);
int main(void){
    int n;
    scanf("%d", &n);
    int a[n][n];
    matrix3(n, a);

}
void matrix3(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 1 + abs(i - j);
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
        
    }
}
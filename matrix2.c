#include <stdio.h>
void matrix2(int n, int matrix[n][n]);
int main(void){
int n;
scanf("%d", &n);
int a[n][n];
matrix2(n, a);
}
void matrix2(int n, int matrix[n][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0 || i == 0)
            {
                matrix[i][j] = j + 1;
                

            }
                        if (i % 2 == 1)
            {
        matrix[i][j] = n-j;   

            }

        }

        
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
                                            printf("\n");
    }
    
    
}
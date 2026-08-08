#include <stdio.h>
void inputdiaram(int n, int matrix[n][n]);
int diagmatrix(int n, int matrix[n][n]);
int pobdiagmatrix(int n, int matrix[n][n]);
int main(void){
    int n;
    scanf("%d", &n);
    int a[n][n];
    inputdiaram(n, a);
    int c = pobdiagmatrix(n,a);
    int d = diagmatrix(n,a);
    if (c > d)
    {
        printf("%d %d", c,d);
    }
    else{
        printf("%d %d", d,c);
    }
    
}
void inputdiaram(int n, int matrix[n][n]){
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
}
int diagmatrix(int n, int matrix[n][n]){
    int res = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                res = res * matrix[i][j];
            }
            
        }
        
    }
    return res;

    
}
int pobdiagmatrix(int n, int matrix[n][n]){
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                res = res * matrix[i][j];
            }
            
        }
        
    }
    return res;
}
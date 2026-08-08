#include <stdio.h>
void input(int n, int m, int matrix[n][m]);
void sumstolb(int n, int m, int matrix[n][m], int array[m]);
void output(int m, int array[m]);
int main(void){
    int n,m; //n строк по m чисел
    scanf("%d%d",&n, &m );
    int a[n][m];
    int array[m];
    input(n, m, a);
    sumstolb(n,m, a, array);
    output(m, array);

}
void input(int n, int m, int matrix[n][m]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
    
}
void sumstolb(int n, int m, int matrix[n][m], int array[m]){
    for (int j = 0; j < m; j++)
{
    array[j] = 0;
}
for (int j = 0; j < m; j++)
{
    for (int i = 0; i < n; i++)
    {
        array[j] += matrix[i][j];
    }
    
}

    
}
void output(int m, int array[m]){
    for (int i = m-1; i >= 0; i--)
    {
        printf("%d ",array[i] );
    }
    
}
#include <stdio.h>
void input(int n, int a[n]);
void output(int n, int a[n]);
int main(void){
    int n;
    scanf("%d", &n);
    char a[n];
    input(n, a);
    output(n, a);
}
void input(int n, int a[n]){
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
}
void output(int n, int a[n]){
    for (int i = 0; i < n; i++)
    {
     printf("%c ", a[i]);
    }
    
}
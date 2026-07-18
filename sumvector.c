#include <stdio.h>
#define NMAX 1000
int main(void){
int a[NMAX], b[NMAX], c[NMAX];
int n;
scanf("%d", &n);

for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
}
for(int i = 0; i < n; i++){
    scanf("%d", &b[i]);
}

for(int i = 0; i < n; i++){
    c[i] = a[i] + b[i];
}

for (int i = 0; i < n; i++)
{
    printf("%d ", c[i]);
}




}
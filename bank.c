#include <stdio.h>

int main(void){
    int a[] = {1, 2, 5, 10, 50, 100, 500, 1000, 5000};
    //a[0] = 10;
    int b[(int)(sizeof(a)/sizeof(int))] = {0};
int x;
scanf("%d", &x);
for(int i = (int)(sizeof(a)/sizeof(int)) - 1; i >= 0 ; i--){
    while (x % a[i] != x)
    {
        b[i]++;
        x = x - a[i];
    }
    
}
for (int i = (int)(sizeof(a)/sizeof(int))-1; i >=0 ; i--)
{
    printf("%d %d\n", a[i], b[i]);
}




    
}   
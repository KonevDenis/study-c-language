#include <stdio.h>
int main(void)
{
int K;
scanf("%d", &K);
for(char i = 90 - K + 1; i <= 90; i++){
    printf("%c ", i);
}
    return 0;
}
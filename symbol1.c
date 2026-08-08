#include <stdio.h>

int main(void){
    char s[40];
    fgets(s, sizeof(s), stdin);
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n')
    {
        len++;
    }
    printf("%d", len);
    return 0;
}
#include<stdio.h>   
void caesar(char *p_ch, int shift);
int main(void)
{
    char ch;
    int shift;
    scanf("%c%d", &ch, &shift);
    caesar(&ch, shift);

    return 0;
}
void caesar(char *p_ch, int shift){
    *p_ch = *p_ch + shift;
    if (*p_ch > 122)
    {
            printf("%c", *p_ch - 26);
    }else{
    printf("%c", *p_ch);
    }
    
    


}
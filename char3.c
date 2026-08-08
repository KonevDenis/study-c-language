#include<stdio.h>   
void shift_register(char *ptr_letter, int fl);
int main(void)
{
    char letter;
    int fl;
    scanf("%c%d", &letter, &fl);
    shift_register(&letter, fl);


    return 0;
}
void shift_register(char *ptr_letter, int fl){
    if (fl == 0)
    {
        if (*ptr_letter >= 97 && *ptr_letter <= 122)
        {
            printf("%c", *ptr_letter);
        }
        else{
            printf("%c", *ptr_letter + 97 - 65);
        }
        
    }
    if (fl == 1)
    {
        if (*ptr_letter >= 97 && *ptr_letter <= 122)
        {
            printf("%c", *ptr_letter - 97 + 65);
        }
        else{
            printf("%c", *ptr_letter);
        }
    }
    
    
}
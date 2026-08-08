#include <stdio.h>
void print_date(int d, int m, int y, int format);
int main(void){
    int day, month, year, format;
    scanf("%d%d%d%d",&day, &month, &year, &format);
    print_date(day, month, year, format);
}

void print_date(int d, int m, int y, int format){
    if (format == 0)
    {
        int last_year = y % 100;
        printf("%02d.%02d.%02d", d, m, last_year);

        
    }
    if (format == 1)
    {
        printf("%02d.%02d.%d", d, m ,y);
    }
    if (format == 2){
        printf("%02d/%02d/%02d",y,m,d );

    }
    
    

}
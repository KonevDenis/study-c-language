

#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main()
{
    int a[ROWS][COLUMNS];

    // чтение массива
    for(int i = 0; i < ROWS; i++) {
        // чтение одной строки a[i]
        for(int j = 0; j < COLUMNS; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // печать массива
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        // печать одной строки a[i]
        for(int j = 0; j < COLUMNS; j++) {
          sum += a[i][j];
        }
        //printf("\n");
    }
    printf("%d", sum);

    return 0;
}
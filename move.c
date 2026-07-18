#include <stdio.h>



void move(int *px, int *py, int dx, int dy);

int main(void){
    int x,y, dx = 0, dy = 0;
    
    move(&x,&y, dx, dy);

}
void move(int *px, int *py, int dx, int dy){
scanf("%d%d%d%d", px, py, &dx, &dy);
*px += dx;
*py += dy;
printf("%d %d", *px, *py);

}
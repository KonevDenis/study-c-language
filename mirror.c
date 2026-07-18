#include <stdio.h>
void mirror(int *px, int *py);
int main(void) {
  int x, y;
  mirror(&x, &y);
}
void mirror(int *px, int *py) {
    scanf("%d%d", px, py);
  //int t;
  //t = *px;
  *px = -*px;
  printf("%d %d", *px, *py);
}
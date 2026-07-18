#include <stdio.h>
void mirror_seg(int *px1, int *py1, int *px2, int *py2);
int main(void) {
  int x1, y1, x2, y2;
  mirror_seg(&x1, &y1, &x2, &y2);
}
void mirror_seg(int *px1, int *py1, int *px2, int *py2) {
    scanf("%d%d%d%d", px1, py1,px2,py2);
  //int t;
  //t = *px;
  *py1 = -*py1;
  *py2 = -*py2;
  printf("%d %d %d %d", *px1, *py1, *px2, *py2);
}
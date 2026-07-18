#include <stdio.h>
void min(int *x, int *y);
int main(void) {
  int x, y;
  min(&x, &y);
}
void min(int *x, int *y) {
  scanf("%d %d", x, y);
  printf("%d %d\n", *x, *y);
  if (*x < *y) {
    printf("%d", *x);
  } else {
    printf("%d", *y);
  }
}
#include <stdio.h>
void min(int *x, int *y);
int main(void) {
  int n, k;
  min(&n, &k);
}
void min(int *x, int *y) {

  scanf("%d %d", x, y);
  int nog = *x / 4;
  int stol;
  if (*y >= nog) {
    stol = nog;
  } else {
    stol = *y % nog;
  }
  printf("%d", stol);
}

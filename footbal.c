#include <stdio.h>
void min(int *x, int *y);
int main(void) {
  int a, b;
  min(&a, &b);
}
void min(int *x, int *y) {

  scanf("%d:%d", x, y);
  printf("%d:%d\n", *x, *y);
  int score;
  if (*x > *y) {
    score = 2;
  } else if (*x == *y) {
    score = 1;
  } else {
    score = 0;
  }
  printf("%d", score);
}

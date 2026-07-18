#include <stdio.h>

int main(void) {
  int x = 7;
  int *p = &x;
  int **pp = &p;
  printf("%p", *pp);
}
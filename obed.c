#include <stdio.h>

int main(void) {

  int n, rice, veg;
  scanf("%d%d%d", &n, &rice, &veg);
  int obed = rice + 2 * veg;
  printf("%d %d %d", n, rice, veg);
  printf("%d\n", obed);
  if (n >= obed) {
    printf("YES");
  }
}
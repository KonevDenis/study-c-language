

#include <math.h>
#include <stdio.h>
float dist(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main() {
  int x1, y1, x2, y2, x3, y3; // координаты точек
  float s;                    // длина

  scanf("%d%d", &x1, &y1); // прочитали числа
  scanf("%d%d", &x2, &y2);
  scanf("%d%d", &x3, &y3);
  s = area(x1, y1, x2, y2, x3, y3); // вызываем функцию dist
  printf("%.3f\n", s);              // напечатать длину
  return 0;
}
float dist(int x1, int y1, int x2, int y2) {

  return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
float area(int x1, int y1, int x2, int y2, int x3, int y3) {
  double a = dist(x1, y1, x2, y2);
  double b = dist(x2, y2, x3, y3);
  double c = dist(x1, y1, x3, y3);
  double p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}
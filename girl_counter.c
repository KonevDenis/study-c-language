#include <stdio.h>
#define NMAX 1000
int main(void) {
  int a[NMAX];
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int c0 = 0;
  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  int c4 = 0;
  int c5 = 0;
  int c6 = 0;
  int c7 = 0;
  int c8 = 0;
  int c9 = 0;
for(int i = 0; i < n; i++){
    if (a[i] == 0)
    {
        c0++;
    }
        if (a[i] == 1)
    {
        c1++;
    }
        if (a[i] == 2)
    {
        c2++;
    }
        if (a[i] == 3)
    {
        c3++;
    }
        if (a[i] == 4)
    {
        c4++;
    }
        if (a[i] == 5)
    {
        c5++;
    }
        if (a[i] == 6)
    {
        c6++;
    }
        if (a[i] == 7)
    {
        c7++;
    }
        if (a[i] == 8)
    {
        c8++;
    }
        if (a[i] == 9)
    {
        c9++;
    }
    
}


  printf("0 %d\n1 %d\n2 %d\n3 %d\n4 %d\n5 %d\n6 %d\n7 %d\n8 %d\n9 %d\n", c0, c1, c2, c3,c4,c5,c6,c7,c8,c9);
}
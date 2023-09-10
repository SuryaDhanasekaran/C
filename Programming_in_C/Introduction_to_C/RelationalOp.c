#include <stdio.h>

int main() {
  int x=10, y=20;
  printf("\n %d < %d = %d", x, y, x<y);
  printf("\n %d == %d = %d", x, y, x==y);
  printf("\n %d != %d = %d", x, y, x!=y);
  printf("\n %d > %d = %d", x, y, x>y);
  printf("\n %d >= %d = %d", x, y, x>=y);
  printf("\n %d <= %d = %d", x, y, x<=y);

  return 0;
}
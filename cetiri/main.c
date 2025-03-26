#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static int cmp(const void* p1, const void* p2) {
  int *a = (int*) p1, *b = (int*) p2;
  return *a > *b;
}

int main() {
  int n[3], ab, bc, d;

  scanf("%d %d %d", &n[0], &n[1], &n[2]);
  qsort(n, 3, sizeof(int), cmp);

  ab = n[1] - n[0];
  bc = n[2] - n[1];

  if(ab == bc)
    d = n[2] + ab;
  else if(ab < bc)
    d = n[2] - ab;
  else
    d = n[2] - 2*bc;

  printf("%d\n", d);
}

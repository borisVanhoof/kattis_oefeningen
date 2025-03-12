#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int n, friend[100] = {0}, i;
  scanf("%d", &n);
  for(i = 1; i < n; i++) {
    int diff;
    scanf("%d", &diff);
    friend[diff + 1] = i + 1;
  }

  friend[0] = 1; // Jimmy
  for(i = 0; i < n - 1; i++) {
    printf("%d ", friend[i]);
  }
  printf("%d\n", friend[i]);
}

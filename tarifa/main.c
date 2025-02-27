#include <stdio.h>

int main(){
  int p, x, n, s = 0;
  scanf("%d", &x);
  scanf("%d", &n);
  while(n--) {
    scanf("%d", &p);
    s = s + x - p;
  }
  printf("%d\n", s + x);
}

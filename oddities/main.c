#include <stdio.h>

int main(){
  int n, x;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &x);
    printf("%d is %s\n", x, x & 1 ? "odd" : "even");
  }
}

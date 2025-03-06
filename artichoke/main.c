#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  int a, b, c, d, n, p;
  double price, max = -1, min = -1, decline = 0;

  scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);

  for(int k = 1; k <= n; k++) {
    price = p * (sin(a * k + b) + cos(c * k + d) + 2);
    if(price >= max) {
      max = price;
      min = price;
      continue;
    }
    if(price < min) {
      min = price;
    }
    if(decline < (max - min)) {
      decline = max - min;
    }
  }
  printf("%f\n", decline);
}

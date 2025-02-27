#include <stdio.h>
#include <string.h>

#define T "To the convention."
#define L "Left beehind."
#define N "Never speak again."
#define U "Undecided."
#define PRINT(X) printf("%s\n", X)

int main() {
  int a, b;
  while(scanf("%d %d", &a, &b) == 2) {
    if(!(a | b)) break;
    if(a + b == 13) PRINT(N);
    else if(a > b) PRINT(T);
    else if(a < b) PRINT(L);
    else PRINT(U);
  }
}

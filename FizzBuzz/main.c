#include <stdio.h>
#include <string.h>

#define F "Fizz"
#define B "Buzz"

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  for(int i = 1; i <= c; i++) {
    if(!(i % a) && !(i % b)) printf(F B "\n");
    else if(!(i % a)) printf(F "\n");
    else if(!(i % b)) printf(B "\n");
    else printf("%d\n", i);
  }
}

#include <stdio.h>
#include <string.h>

int main() {
  int n, i, days = 0, smallest = 2e9, junk;
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &junk);
    if(junk < smallest) {
      days = i;
      smallest = junk;
    }
  }
  printf("%d\n", days);
}

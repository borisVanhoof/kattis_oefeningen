#include <stdio.h>
#include <string.h>

int main() {
  int a, b, n;
  char buf[100];
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%s", buf);
    if(strcmp(buf, "P=NP") == 0) printf("skipped\n");
    else {
      b = 0;
      sscanf(buf, "%d+%d", &a, &b);
      printf("%d\n", a + b);
    }
  }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverse(char* a, size_t len) {
  char* buf = NULL;
  int j = 0;

  buf = calloc(1, len + 1);
  if(!buf)
    goto exit;

  for(int i = 1; (int) len - i >= 0; i++) {
    buf[j++] = a[len - i];
  }

  memcpy(a, buf, len);

exit:
  free(buf);
}

int main() {
  char a[4], b[4];
  int ai, bi;
  scanf("%s %s", a, b);
  reverse(a, strlen(a));
  reverse(b, strlen(b));
  sscanf(a, "%d", &ai);
  sscanf(b, "%d", &bi);
  printf("%s\n", ai > bi ? a : b);
}

#include <stdio.h>
#include <string.h>

int main() {
  int min, max, n, sample, count = 0;
  while(scanf("%d", &n) == 1) {
    for(int i = 0; i < n; i++) {
      scanf("%d", &sample);
      if(i==0) {
        min = sample;
        max = sample;
        continue;
      }
      if(sample < min) min = sample;
      if(sample > max) max = sample;
    }
    printf("Case %d: %d %d %d\n", ++count, min, max, max - min);
  }
}

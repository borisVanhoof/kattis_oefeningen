#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int n, increasing = -1, i;
  char team[20][13] = {0};
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%s", team[i]);
  }
  for(i=0; i<n-1; i++) {
    int cmp = strcmp(team[i], team[i+1]) < 0;
    if(increasing == -1) {
      increasing = cmp;
    } else if(cmp != increasing) {
      break;
    }
  }
  if(i != n-1)
    printf("NEITHER\n");
  else if(increasing)
    printf("INCREASING\n");
  else
    printf("DECREASING\n");
}

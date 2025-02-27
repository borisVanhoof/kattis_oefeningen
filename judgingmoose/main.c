#include <stdio.h>

#define MAX(X,Y) ((X > Y) ? X : Y)

int main(){
  int l, r, sum;
  while(scanf("%d %d", &l, &r) == 2) {
    sum = l + r;
    if(sum == 0) {
      printf("Not a moose\n");
      continue;
    }
    if(sum % 2) {
      printf("Odd %d\n", MAX(l,r) * 2);
    } else {
      printf("Even %d\n", sum);
    }
  }
}

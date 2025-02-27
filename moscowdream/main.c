#include<stdio.h>

int main(){
  int a, b, c, n;
  while(scanf("%d %d %d %d", &a, &b, &c, &n) == 4){
    if(a>1 && b>1 && c>1 && a + b + c >= n && n>3) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}

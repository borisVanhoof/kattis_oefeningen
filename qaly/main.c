#include <stdio.h>

int main(){
  int n;
  float q, y, qaly = 0;
  scanf("%d", &n);
  while(n){
    scanf("%f %f", &q, &y);
    qaly += q * y;
    n--;
  }
  printf("%0.3f\n", qaly);
}

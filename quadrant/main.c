#include <stdio.h>

int main(){
  int x, y, quadrant;
  while(scanf("%d %d", &x, &y) == 2) {
    if(x > 0 && y > 0) quadrant = 1;
    else if (x < 0 && y > 0) quadrant = 2;
    else if(x < 0 && y < 0) quadrant = 3;
    else quadrant = 4;
    printf("%d\n", quadrant);
  }
}

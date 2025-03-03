#include <stdio.h>
#include <string.h>

int main() {
  int i, samples, j, gnomes, gnome, next;
  scanf("%d", &samples);
  for(i = 0; i < samples; i++) {
    scanf("%d %d", &gnomes, &gnome);
    for(j = 1; j < gnomes; j++) {
      scanf("%d", &next);
      if(next != gnome + 1) {
        printf("%d\n", j + 1);
        scanf("%*[^\n]"); // once the king is found the rest of the gnomes may be skipped
        break;
      }
      gnome = next;
    }
  }
}

#include <stdio.h>
#include <string.h>

#define INF 1e9

int score(int* s) {
  char buf[100] = {0};
  int score;
  sprintf(buf, "%d%d", s[0] > s[1] ? s[0] : s[1], s[0] > s[1] ? s[1] : s[0]);
  sscanf(buf, "%d", &score);
  if(score == 12 || score == 21) score = INF;
  else if(score == 66) score = INF - 1;
  else if(score == 55) score = INF - 2;
  else if(score == 44) score = INF - 3;
  else if(score == 33) score = INF - 4;
  else if(score == 22) score = INF - 5;
  else if(score == 11) score = INF - 6;
  return score;
}

int main() {
  int s[3], r[3];
  while(scanf("%d %d %d %d", &s[0], &s[1], &r[0], &r[1]) == 4) {
    if(!(s[0] | s[1] | r[0] | r[1])) break;
    s[2] = score(s);
    r[2] = score(r);
    if(s[2] != r[2]) printf("Player %d wins.\n", s[2] > r[2] ? 1 : 2);
    else printf("Tie.\n");
  }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define R "right"



int main() {
  int time, total = 0, completed = 0, i;
  char problem;
  char outcome[6];
  struct {
    int complete;
    int points;
  } score[26] = {{0}};

  while(scanf("%d %c %s", &time, &problem, outcome) == 3) {
    i = problem - 'A';

    if(score[i].complete)
      continue;

    if(strcmp(outcome, R) == 0) {
      score[i].complete = 1;
      total += score[i].points + time;
      completed++;
    } else {
      score[i].points += 20;
    }
  }

  printf("%d %d\n", completed, total);
}

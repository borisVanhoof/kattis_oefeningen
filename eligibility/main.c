#include <stdio.h>

#define _E "eligible"
#define _I "ineligible"
#define _CP "coach petitions"

#define DATE(X) &X.y, &X.m, &X.d
#define PRINT(X) printf("%s %s\n", name, X)

int main(){
  int cases, start, born, courses;
  char name[64];

  scanf("%d", &cases);
  for(int i = 0; i < cases; i++) {
    scanf("%s %d/%*s %d/%*s %d", name, &start, &born, &courses);
    if(start >= 2010) PRINT(_E);
    else if(born >= 1991) PRINT(_E);
    else if(courses >= 41) PRINT(_I);
    else PRINT(_CP);
  }
}

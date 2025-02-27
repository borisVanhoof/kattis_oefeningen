#include<stdio.h>
#include<string.h>

int main() {
  char month[50];
  int day;
  while(scanf("%s %d", &month, &day) == 2) {
    printf("%s\n", ((strcmp(month, "DEC") == 0 && day == 25) || (strcmp(month, "OCT") == 0 && day == 31)) ? "yup" : "nope");
  }
}

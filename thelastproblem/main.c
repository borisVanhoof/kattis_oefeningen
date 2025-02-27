#include <stdio.h>

int main(){
  char name[200];
  while(scanf("%s", name) != EOF){
    printf("Thank you, %s, and farewell!\n", name);
  }
}

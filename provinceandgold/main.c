#include <stdio.h>

#define P_A "Province"
#define P_B "Dutchy"
#define P_C "Estate"
#define P_N NULL

#define T_A "Gold"
#define T_B "Silver"
#define T_C "Copper"

struct {
  int cost;
  char* province;
  char* treasure;
} cards[] = {
  {8, P_A, T_A},
  {6, P_B, T_A},
  {5, P_B, T_B},
  {3, P_C, T_B},
  {2, P_C, T_C},
  {0, P_N, T_C},
};

int main(){
  int g, s, c, buying_power;
  char* province = NULL;
  char* treasure = NULL;
  while(scanf("%d %d %d", &g, &s, &c) == 3) {
    buying_power = 3 * g + 2 * s + c;
    for(int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++) {
      if(cards[i].cost <= buying_power) {
        province = cards[i].province;
	treasure = cards[i].treasure;
	if(province && treasure)
          printf("%s or %s\n", province, treasure);
        else
          printf("%s\n", treasure);
	break;
      }
    }
  }
}

    

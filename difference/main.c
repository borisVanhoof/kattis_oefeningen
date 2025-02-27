#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
    long i = 0, j = 0;
    while(scanf("%ld %ld", &i, &j) == 2) {
        printf("%ld\n", labs(i-j));
    }
}

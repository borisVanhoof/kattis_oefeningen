#include <stdio.h>
int main(){char w[31],*c;scanf("%s",w);c=w;while(*c&&(*(c++)!='s'||*c!='s'));printf("%shiss\n",*c?"":"no ");}

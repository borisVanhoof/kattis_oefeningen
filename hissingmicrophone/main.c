#include<stdio.h>
int main(){char w[99],*c=w;for(scanf("%s",w);*c&&(*(c++)!='s'||*c!='s'););printf(&"no hiss\n"[*c?3:0]);}

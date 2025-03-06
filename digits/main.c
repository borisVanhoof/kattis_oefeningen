#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv) {
  int digits = 0, x = 0, i = 0;
  char* buf = NULL;
  char* res = NULL;
  size_t bufsiz = 1000002 * sizeof(char); // 1000000 + 2 for \n and \0
  FILE* fp = stdin;

#ifdef TEST
  if(argc != 2) {
    printf("Usage: %s <file.test>\n", argv[0]);
    return 1;
  }
  fp = fopen(argv[1], "r");
#endif

  if(!fp)
    return 1;

  buf = calloc(1, bufsiz);
  if(buf == NULL) return 1;

  res = fgets(buf, bufsiz, fp);

  while(1) {
    size_t len = 0;

    if(!res)
      goto reset;

    if(strncmp(res, "END", 3) == 0)
      break;

    len = strlen(res);
    if((len > 0) && (buf[len - 1] == '\n'))
        len -= 1;

    digits += len;

    if(len == 1 && buf[0] == '1' && x == 0)
      x = 1; // I admit I had to look it up to know 2 is not the result for x0==1

reset:
    if(x == digits) {
      printf("%d\n", ++i);
      x = 0;
      i = 0;
      res = fgets(buf, bufsiz, fp);
    } else {
      i++;
      x = digits;
      snprintf(buf, bufsiz, "%d", x);
      res = buf;
    }
    digits = 0;
  }

  free(buf);
#ifdef TEST
  fclose(fp);
#endif
}

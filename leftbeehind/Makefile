CFLAGS=-Wall -Werror

.RECIPEPREFIX = >

all: a.out

a.out: main.c
> @gcc $(CFLAGS) main.c

run: a.out
> @cat in | ./a.out | tee myout
> @[ -f out ] && diff myout out

clean:
> rm ./a.out myout

.PHONY: all run clean

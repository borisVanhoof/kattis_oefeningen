~/.bash_aliases
```
# copy basic main.c to new dir, usage: kmkdir <new dir>
alias kmkdir='function _mkcp() { mkdir -p "$1" && cp ~/.kattis/* "$1"/; }; _mkcp'
```

~/.kattis/main.c
```
#include <stdio.h>
#include <string.h>

int main() {

}
```

~/.kattis/Makefile
```
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
```

~/.vimrc
```
" Set tab width to 2 spaces
set tabstop=2
set shiftwidth=2
set expandtab

" Enable auto-indentation
set autoindent
set smartindent

" Show existing tab characters as `▸·`
set list
set listchars=tab:▸·,trail:·

" Enable line numbers
set number
```

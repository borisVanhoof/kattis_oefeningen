disclaimer: all in/out and problems are from https://open.kattis.com/, I do not claim any ownership

you may offer pull request for improvements

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
include ../Makefile.in
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

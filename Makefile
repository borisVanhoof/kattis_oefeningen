SUBDIRS := $(shell find . -type d -maxdepth 1 ! -name .git ! -name .)

.RECIPEPREFIX = >

all: run

run:
> for dir in $(SUBDIRS); do make -C $$dir $@ || exit 1; done

clean:
> for dir in $(SUBDIRS); do make -C $$dir $@; done

.PHONY: all run clean

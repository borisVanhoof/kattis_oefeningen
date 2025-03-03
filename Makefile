SUBDIRS := $(shell find . -maxdepth 1 -type d ! -name "\.*")

.RECIPEPREFIX = >

all: run

run:
> @for dir in $(SUBDIRS); do make -C $$dir $@ > /dev/null || exit 1; done

clean:
> @for dir in $(SUBDIRS); do make -C $$dir $@; done

.PHONY: all run clean

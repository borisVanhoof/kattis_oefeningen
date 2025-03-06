include ../Makefile.in

testfiles: i2.test i3.test i4.test

i2.test:
>  @printf '%01d\n' 0 | tr '0' '9' > $@
>  @echo END >> $@

i3.test:
>  @printf '%09d\n' 0 | tr '0' '9' > $@
>  @echo END >> $@

i4.test:
>  @printf '%01000000d\n' 0 | tr '0' '9' > $@
>  @echo END >> $@

.PHONY: testfiles

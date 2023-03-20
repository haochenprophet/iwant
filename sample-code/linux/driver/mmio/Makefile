KDIR ?= /lib/modules/`uname -r`/build
obj-m += mmio.o

all:
	make -C $(KDIR) M=$(PWD) modules
	gcc main.c -o mmio 
clean:
	make -C $(KDIR) M=$(PWD) clean
	rm *.out mmio -f

obj-m := hello.o
KERNELDIR := /lib/modules/3.13.11-ckt29/build
PWD := $(shell pwd)
modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm *.o *.mod.c *.symvers *.ko \.*.cmd *.order

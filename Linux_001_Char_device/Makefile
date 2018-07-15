obj-m += hello.o

all:
	make -C /usr/src/linux-headers-$(shell uname -r) M=$(PWD) modules

clean:
	rm *.ko *.o *.mod.* *.symvers *.order

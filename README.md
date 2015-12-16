####Hello kernel####
It's a sample for kernel coding.

####Precondition####
Ya, you will need kernel source code to proceed.
```
sudo  apt-get install build-essential kernel-package  libncurses5-dev
```

1. Go to [www.kernel.org](https://www.kernel.org/) to download one.
2. Build the kernel tree
```
sudo make oldconfig (or make menuconfig)
make
make modules
make modules_install
make install (this will install new kernel into grub)
```
####Try to use hello####
```
git clone https://github.com/qiangpipi/hello_kernel.git
cd ./hello
vi Makefile (var KERNELDIR need to be changed here!!)
make
insmod ./hello.ko
lsmod |grep hello
rmmod hello
```
####Try to use hello####
```
git clone https://github.com/qiangpipi/hello_kernel.git
cd ./hello_para
vi Makefile (var KERNELDIR need to be changed here!!)
make
insmod ./hello_para.ko
lsmod |grep hello_para
rmmod hello_para
```
>File in knowledge:
>>c_knowledge.c: some useful macro define

####Troubles####
1. While build the kernel tree, you will be asked for some new configuration with Yes or No. If you met some error while compile the kernel, try to No to those new configuration.
2. If you download the different version of the kernel with you current using, make sure to 'make install'. Or u will get error when running insmod like wrong version or different version something.
3. insmod/rmmod will output the string in the shell... Hmm... I guess the shell is the pts/0...

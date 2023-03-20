make clean
make

sudo rmmod  mmio
sudo insmod mmio.ko
sudo dmesg

sudo ./mmio

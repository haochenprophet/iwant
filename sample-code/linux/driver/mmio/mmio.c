#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <asm/irq.h>
#include <asm/uaccess.h>
#include <asm/io.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include "mmio.h"

mmio_action action;//for read() write()

mmio_map_range map_range={0,0};

int check_address_map_range(physical_address phy_addr)
{

	return 0;
}

static int mmio_open(struct inode *inode, struct file *filp)
{  
	AT_LINE
	return 0;
}

static ssize_t mmio_read (struct file *file, char __user *buf, size_t size, loff_t *offset)
{
	int ret;	AT_LINE
	ret = copy_from_user(&action, buf, sizeof(mmio_action));
	ret = copy_to_user(buf, &action, sizeof(mmio_action));
	return 0;
}

static ssize_t mmio_write(struct file *file, const char __user *buf, size_t count, loff_t *offset)
{  

	int ret;AT_LINE
	ret = copy_from_user(&action, buf, sizeof(mmio_action));
	ret = copy_to_user((char *)buf,&action, sizeof(mmio_action));
   return 0;
}

//create file device 
static struct file_operations mmio_fops = {
   .owner = THIS_MODULE,
   .open = mmio_open,
   .read = mmio_read,
   .write = mmio_write,
};

int mmio_device;
struct class *mmio_class;

int mmio_init(void)
{
	AT_LINE
	mmio_device = register_chrdev (0, "mmio", &mmio_fops);
	mmio_class = class_create(THIS_MODULE, "mmio");
	device_create(mmio_class, NULL, MKDEV(mmio_device, 0), NULL, "mmio");

   return 0;
}

void mmio_exit(void)
{
	AT_LINE
	device_destroy(mmio_class, MKDEV(mmio_device, 0));
	class_destroy(mmio_class);
	unregister_chrdev(mmio_device, "mmio");	 
}

module_init(mmio_init);
module_exit(mmio_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("https://github.com/haochenprophet");
MODULE_DESCRIPTION("Device Memory Map Input Output Address Access");

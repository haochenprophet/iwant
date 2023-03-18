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

//global data 
mmio_map_range public_addr_range={none_map_state,0};

inline void init_map_range(mmio_map_range *map)
{	AT_LINE
	map->status = none_map_state;
}

int unmap_range(mmio_map_range *map)
{	AT_LINE
	if( (map->status&none_map_state)==none_map_state) return 0;// bit 0 =0 none map 
	
	map->status = none_map_state;
	iounmap(map->base_addr);

	return 0;
}

int map_range(physical_address phy_addr,size_t size,mmio_map_range *map)
{	AT_LINE
	
	map->phy_addr = phy_addr & ADDRESS_PAGE_ALIGN;//change map->phy_addr ~(0xFFF)
	map->offset = phy_addr & ADDRESS_OFFSET_KEEP;//0xFFF

	if(size % MMIO_MAP_PAGE >0) //Not a whole memory page
	{
		map->size = (size & ADDRESS_PAGE_ALIGN) + MMIO_MAP_PAGE;//At least one page
	}

	map->base_addr=ioremap(map->phy_addr, map->size);// save ioremap address to map->base_addr and for iounmap(map->base_addr);

	map->address=map->base_addr+map->offset;//set and save map->address point to phy_addr
	map->status =in_map_state;

	return 0;// case none map return 
}

int build_map_range(physical_address phy_addr,size_t size,mmio_map_range *map) 
{	AT_LINE
	if( (map->status & none_map_state) == none_map_state )// bit 0 =0 none map 
	{
		map_range(phy_addr,size,map);
		return 0;// case none map return 
	}
	//else //if(map->status&in_map_state==in_map_state) //bit 0 =1 in map state
	
	if( phy_addr >= map->phy_addr && phy_addr+size <= map->phy_addr + map->size )//set and save map->address point to phy_addr
	{
		map->address=map->base_addr+(phy_addr -  map->phy_addr);//offset = phy_addr -  map->phy_addr 
		return 0;//phy_addr in current map range
	}

	//else out off mmio map range 
	unmap_range(map);
	map_range(phy_addr,size,map);
	
	return 0;
}

int do_mmio_action_read(volatile void *address,mmio_action * action)
{	AT_LINE
	if(action->action <= mmio_read_action)	//mmio_read_action
	{
		action->data = *(mmio_data *) address;
		switch(action->action)
		{
			case mmio_byte_read  :
				action->data &=0xFF;
				break;
			case mmio_word_read  :
				action->data &=0xFFFF;
				break;
			case mmio_dword_read :
				break;
			default:
		}
		return 0;
	}
	return -1;//do nothing
}

int do_mmio_action_write(volatile void *address,mmio_action * action)
{	AT_LINE
	if(action->action >= mmio_byte_write && action->action <= mmio_write_action)	//mmio_write_action
	{
		switch(action->action)
		{
			case mmio_byte_write  :
				* (UINT8 *) address = (UINT8) action->data;
				break;
			case mmio_word_write  :
				* (UINT16 *) address = (UINT16) action->data;
				break;
			case mmio_dword_write :
				* (UINT32 *) address = (UINT32) action->data;
				break;
			default:
				* (UINT32 *) address = (UINT32) action->data;
		}
		return 0;	
	}
	return -1;//do nothing
}

int do_mmio_action_and(volatile void *address,mmio_action * action)
{	AT_LINE
	if(action->action >= mmio_byte_and && action->action <= mmio_and_action)	//mmio_and_action
	{
		switch(action->action)
		{
			case mmio_byte_and  :
				* (UINT8 *) address &= (UINT8) action->data;
				break;
			case mmio_word_and  :
				* (UINT16 *) address &= (UINT16) action->data;
				break;
			case mmio_dword_and :
				* (UINT32 *) address &= (UINT32) action->data;
				break;
			default:
				* (UINT32 *) address &= (UINT32) action->data;
		}
		return 0;	
	}

	return -1;//do nothing
}

int do_mmio_action_or(volatile void *address,mmio_action * action)
{	AT_LINE
	if(action->action >= mmio_byte_or && action->action <= mmio_or_action)	//mmio_or_action
	{
		switch(action->action)
		{
			case mmio_byte_or  :
				* (UINT8 *) address |= (UINT8) action->data;
				break;
			case mmio_word_or  :
				* (UINT16 *) address |= (UINT16) action->data;
				break;
			case mmio_dword_or :
				* (UINT32 *) address |= (UINT32) action->data;
				break;
			default:
				* (UINT32 *) address |= (UINT32) action->data;
		}
		return 0;	
	}

	return -1;//do nothing
}

int do_mmio_action(volatile void *address,mmio_action * action)
{	AT_LINE
	if(action->action >= mmio_byte_read && action->action <= mmio_or_action)	//from mmio_byte_read to mmio_or_action
	{
		if(0==do_mmio_action_read(address,action)) return 0;
		if(0==do_mmio_action_write(address,action)) return 0;
		if(0==do_mmio_action_and(address,action)) return 0;
		if(0==do_mmio_action_or(address,action)) return 0;
	}
	return -1;
}


static int mmio_open(struct inode *inode, struct file *filp)
{  
	AT_LINE
	return 0;
}


static ssize_t mmio_read (struct file *file, char __user *buf, size_t size, loff_t *offset)
{
	int ret;	
	mmio_action action;
	AT_LINE;
	ret = copy_from_user(&action, buf, sizeof(mmio_action));//copy mmio_action to action
	build_map_range(action.phy_addr,MMIO_MAP_PAGE,& public_addr_range);
	action.status=do_mmio_action(public_addr_range.address,&action);
	ret = copy_to_user(buf, &action, sizeof(mmio_action));
	return 0;
}

static ssize_t mmio_write(struct file *file, const char __user *buf, size_t count, loff_t *offset)
{  
	int ret;
	mmio_action action;
	AT_LINE;
	ret = copy_from_user(&action, buf, sizeof(mmio_action));
	build_map_range(action.phy_addr,MMIO_MAP_PAGE,& public_addr_range);
	action.status=do_mmio_action(public_addr_range.address,&action);
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

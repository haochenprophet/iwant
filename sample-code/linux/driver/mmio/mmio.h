#ifndef MMIO_H
#define MMIO_H  

//debug code 
#ifndef LINUX_DEBUG
#define LINUX_DEBUG  1
#endif

#if LINUX_DEBUG
    #define AT_LINE  {printk("file:%s,function=%s,line=%d",__FILE__,__FUNCTION__,__LINE__);}
#else
    #define AT_LINE  
#endif

//mmio code 
#define MMIO_MAP_PAGE  (4096) //one address map 4KB(0x1000) one page for mmio_action access

typedef unsigned char   UINT8; //byte data
typedef unsigned short  UINT16; //word data
typedef unsigned int    UINT32; //dword data

typedef unsigned int  physical_address; //32 bit address 
typedef unsigned int  mmio_data; //32 bit data

#define ADDRESS_OFFSET_KEEP  0xFFF
#define ADDRESS_PAGE_ALIGN   0xFFFFF000

//note : do not change mmio_action_enum define order do_mmio_action() used 
//  if(action->action > mmio_read_action && action->action <= mmio_write_action)    //mmio_write_action
//  if(action->action <= mmio_read_action)  //mmio_read_action
//  if(action->action > mmio_write_action && action->action <= mmio_and_action) //mmio_and_action

enum mmio_action_enum { 
    mmio_byte_read=1, mmio_word_read,  mmio_dword_read, mmio_read_action,// read action : [mmio_address] to data 
    mmio_byte_write,  mmio_word_write, mmio_dword_write,mmio_write_action,// write action: data to [mmio_address] 
    mmio_byte_and,    mmio_word_and,   mmio_dword_and,  mmio_and_action,// write and action: data to [mmio_address] 
    mmio_byte_or,     mmio_word_or,    mmio_dword_or,   mmio_or_action,// write or action: data to [mmio_address] 
};

enum mmio_map_status { 
    none_map_state=0,//bit0=0
    in_map_state=1,//bit 0=1
    map_change_state=2,//bit 1=1
};


typedef struct mmio_action_struct
{
    physical_address phy_addr;
    mmio_data data;
    int action;
    int status;//0 :success >0 fail <0 do nothing
}mmio_action;

typedef struct mmio_map_range_struct
{
    int status;
    size_t size; //4K units
    physical_address phy_addr;//4K alignment
    int offset;
    volatile void *base_addr;//4K base address from ioremap
    volatile void *address;//base_addr + offset
}mmio_map_range;

#endif //MMIO_H  
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
#define MMIO_MAP_SIZE  (4096) //one address map 4KB(0x1000) one page for mmio_action access

typedef unsigned long long physical_address; //64 bit address 
typedef unsigned long long mmio_data; //64 bit data

enum mmio_action_enum { 
    mmio_byte_read=1, mmio_word_read,  mmio_dword_read, mmio_qword_read, // read action : [mmio_address] to data 
    mmio_byte_write,  mmio_word_write, mmio_dword_write,mmio_qword_write,// write action: data to [mmio_address] 
    mmio_byte_and,    mmio_word_and,   mmio_dword_and,  mmio_qword_and,// write and action: data to [mmio_address] 
    mmio_byte_or,     mmio_word_or,    mmio_dword_or,   mmio_qword_or,// write or action: data to [mmio_address] 
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
    physical_address phy_addr;//4K alignment
    size_t size; //4K units
}mmio_map_range;

#endif //MMIO_H  
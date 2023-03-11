#ifndef MMIO_H
#define MMIO_H  

#ifndef LINUX_DEBUG
#define LINUX_DEBUG  1
#endif

#if LINUX_DEBUG
    #define AT_LINE  {printk("file:%s,function=%s,line=%d",__FILE__,__FUNCTION__,__LINE__);}
#else
    #define AT_LINE  
#endif


#endif //MMIO_H  
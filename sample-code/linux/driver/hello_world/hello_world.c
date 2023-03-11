#include <linux/init.h>
#include <linux/module.h>

#ifndef LINUX_DEBUG
#define LINUX_DEBUG  1
#endif

#if LINUX_DEBUG
    #define AT_LINE  {printk("file:%s,function=%s,line=%d",__FILE__,__FUNCTION__,__LINE__);}
#else
    #define AT_LINE  
#endif

static int hello_init(void)
{
    AT_LINE

    return 0;
}

static void hello_exit(void)
{
    AT_LINE
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("https://github.com/haochenprophet");

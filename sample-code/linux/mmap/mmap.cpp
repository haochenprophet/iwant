#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/mman.h>

#define INTEL_GPIO_BASE_ADDR        0xFD000000        
#define MMAP_ADDR INTEL_GPIO_BASE_ADDR   
 
#define MMAP_SIZE 0x1000        

int main(int argc, char *argv[])
{
    int fd = 0;
    unsigned long data;
    char *mmap_base = NULL;

    fd = open("/dev/mem", O_RDWR | O_NDELAY);        

    if (fd < 0)    
    {  
        printf("open mem fd failed\n");      
        return -1;  
    }  

    mmap_base=(char *)mmap(NULL, MMAP_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, MMAP_ADDR);  
    
    if (NULL == mmap_base)
    {
        printf("mmap failed\n");
        return -1;
    }
    
    data = *( unsigned long  *)(mmap_base + 0);

    munmap(mmap_base, MMAP_SIZE);
    close(fd);

    return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/mman.h>

#define REG_PERT_BASE_ADDR        0x120E0000        
#define MMAP_ADDR REG_PERT_BASE_ADDR   
 
#define MMAP_SIZE 0x1000        

int main(int argc, char *argv[])
{
    int fd = 0;//,data;
    char *mmap_base = NULL;

    fd = open("/dev/mem", O_RDWR | O_NDELAY);        

    if (fd < 0)    
    {  
        printf("open mem fd failed,%s\n", strerror(errno));      
        return -1;  
    }  

    mmap_base=(char *)mmap(NULL, MMAP_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, MMAP_ADDR);  
    
    if (NULL == mmap_base)
    {
        printf("mmap failed,%s\n", strerror(errno));
        return -1;
    }
    
    //data = (int*)(mmap_base + 0);

    munmap(mmap_base, MMAP_SIZE);
    close(fd);

    return 0;
}
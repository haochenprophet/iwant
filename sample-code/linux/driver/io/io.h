#ifndef __IO_H_
#define __IO_H_

#include <sys/io.h>

class Cio
{
public :
    Cio();
    ~Cio();
    int read(unsigned short io_addr,unsigned char *  data);//byte read
    int read(unsigned short io_addr,unsigned short * data);//word read
    int read(unsigned short io_addr,unsigned int *     data);//dword read 

    int write(unsigned short io_addr,unsigned char    data);//byte write
    int write(unsigned short io_addr,unsigned short  data);//word write
    int write(unsigned short io_addr,unsigned int      data);//dword write 

    int _and(unsigned short io_addr,unsigned char   data);//byte _and
    int _and(unsigned short io_addr,unsigned short  data);//word _and
    int _and(unsigned short io_addr,unsigned int      data);//dword _and 

    int _or(unsigned short io_addr,unsigned char  data);//byte _or
    int _or(unsigned short io_addr,unsigned short data);//word _or
    int _or(unsigned short io_addr,unsigned int     data);//dword _or 

    int isa(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char *  data);// isa read 
    int isa(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char  data);// isa write
    int isa_and(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char  data);// isa and
    int isa_or(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char  data);// isa or

};

#endif //__IO_H_
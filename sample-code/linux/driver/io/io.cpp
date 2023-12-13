#include "io.h"
/*
  #include <sys/io.h>

   unsigned char inb(unsigned short int port);
   unsigned char inb_p(unsigned short int port);
   unsigned short int inw(unsigned short int port);
   unsigned short int inw_p(unsigned short int port);
   unsigned int inl(unsigned short int port);
   unsigned int inl_p(unsigned short int port);

   void outb(unsigned char value, unsigned short int port);
   void outb_p(unsigned char value, unsigned short int port);
   void outw(unsigned short int value, unsigned short int port);
   void outw_p(unsigned short int value, unsigned short int port);
   void outl(unsigned int value, unsigned short int port);
   void outl_p(unsigned int value, unsigned short int port);

   void insb(unsigned short int port, void *addr,
              unsigned long int count);
   void insw(unsigned short int port, void *addr,
              unsigned long int count);
   void insl(unsigned short int port, void *addr,
              unsigned long int count);
   void outsb(unsigned short int port, const void *addr,
              unsigned long int count);
   void outsw(unsigned short int port, const void *addr,
              unsigned long int count);
   void outsl(unsigned short int port, const void *addr,
              unsigned long int count);
*/

    Cio::Cio()
    {
        iopl(3);
    }

    Cio::~Cio()
    {
         iopl(0);
    }

    //0 pass , -1 do nothing 1:error
    int Cio::read(unsigned short io_addr,unsigned char *  data)//byte read
    {
        * data = inb(io_addr);
    	return 0;
    }

    int Cio::read(unsigned short io_addr,unsigned short * data)//word read
    {
        * data = inw(io_addr);
    	return 0;
    }

    int Cio::read(unsigned short io_addr,unsigned int *     data)//dword read 
    {
        * data = inl(io_addr);
    	return 0;
    }

    int Cio::write(unsigned short io_addr,unsigned char    data)//byte write
    {
        outb(data,io_addr);
    	return 0;
    }

    int Cio::write(unsigned short io_addr,unsigned short  data)//word write
    {
        outw(data,io_addr);
    	return 0;
    }

    int Cio::write(unsigned short io_addr,unsigned int      data)//dword write 
    {
        outl(data,io_addr);
    	return 0;
    }

    int Cio::_and(unsigned short io_addr,unsigned char   data)//byte _and
    {
        outb( inb(io_addr)&data , io_addr);
    	return 0;
    }

    int Cio::_and(unsigned short io_addr,unsigned short  data)//word _and
    {
        outw( inw(io_addr)&data , io_addr);
    	return 0;
    }

    int Cio::_and(unsigned short io_addr,unsigned int      data)//dword _and 
    {
        outl( inl(io_addr)&data , io_addr);
    	return 0;
    }

    int Cio::_or(unsigned short io_addr,unsigned char  data)//byte _or
    {
        outb( inb(io_addr)|data , io_addr);
    	return 0;
    }

    int Cio::_or(unsigned short io_addr,unsigned short data)//word _or
    {
        outw( inw(io_addr)|data , io_addr);
    	return 0;
    }

    int Cio::_or(unsigned short io_addr,unsigned int     data)//dword _or 
    {
        outl( inl(io_addr)|data , io_addr);
    	return 0;
    }

    int Cio::isa(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char *  data)// isa read 
    {
        outb(index,index_addr);
       *  data= inb(data_addr);
    	return 0;
    }

    int Cio::isa(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char  data)// isa write
    {
        outb(index,index_addr);
        outb(data,data_addr);
    	return 0;
    }

    int Cio::isa_and(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char  data)// isa and
   {
        outb(index,index_addr);
        outb(inb(data_addr)&data,data_addr);
        return 0;
    }

    int Cio::isa_or(unsigned short index_addr,unsigned char  index,unsigned short data_addr,unsigned char  data)// isa or
    {
        outb(index,index_addr);
        outb(inb(data_addr)|data,data_addr);
        return 0;
    }

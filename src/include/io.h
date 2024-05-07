#ifndef IO_H
#define IO_H

#include "../object.h"
#include "register_hw.h"

#if LINUX_OS
#include <sys/io.h>
#endif

namespace n_io {
	class Cio :public Object
	{
	public:
		Cio();
		~Cio();
		int my_init(void *p=nullptr);
	public:
		static int read( unsigned short port,unsigned char * data);//8bit access out to uint8_t data
		static int read( unsigned short port,unsigned short * data);//word 16 bit access out to uint16_t data
		static int read( unsigned short port,unsigned int * data);//double word 32 bit access out to uint32_t data
		static int read( unsigned short port,unsigned long long * data);//quad word sh64 bit access out to uint64_t data
		static int write(unsigned short port,unsigned char data);//8bit access 
		static int write(unsigned short port,unsigned short data);//word 16 bit access 
		static int write(unsigned short port,unsigned int data);//double word 32 bit access uint32_t
		static int write(unsigned short port,unsigned long long data);//quad word sh64 bit access 
		static int read(unsigned short index_port, unsigned char index, unsigned short data_port, unsigned char* data); //ISA IO read : CMOS ,EC, SIO ,
		static int write(unsigned short index_port, unsigned char index, unsigned short data_port, unsigned char data); //ISA IO write : CMOS ,EC, SIO ,
	};

	class CioHwRw : public Chardware_rw,public Cio
	{
	public:
		CioHwRw();
		~CioHwRw();
		int my_init(void* p=nullptr);
	public:
		void delay(int count);
		int byte_read(hardware_register* hw_reg);//8bit access 
		int word_read(hardware_register* hw_reg);//word 16 bit access 
		int dword_read(hardware_register* hw_reg);//double word 32 bit access 
		int qword_read(hardware_register* hw_reg);//quad word sh64 bit access 
		int byte_write(hardware_register* hw_reg);//8bit access 
		int word_write(hardware_register* hw_reg);//word 16 bit access 
		int dword_write(hardware_register* hw_reg);//double word 32 bit access 
		int qword_write(hardware_register* hw_reg);//quad word sh64 bit access 
	};
}

using namespace n_io;

#endif

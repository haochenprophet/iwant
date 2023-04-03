#include "io.h"

#if LINUX_OS
#include <sys/io.h>
#endif

int Cio::my_init(void *p)
{
	this->name = "Cio";
	this->alias = "io";
	return 0;
}

Cio::Cio()
{
	this->my_init();
#if LINUX_OS
	iopl(3);
#endif
}

Cio::~Cio()
{
#if LINUX_OS
	iopl(0);
#endif
}
//8bit access out to uint8_t data
int Cio::read(unsigned short port, unsigned char * data)
{
#if LINUX_OS
	* data = inb(port);
#endif
	return 0;
}
//word 16 bit access out to uint16_t data
int Cio::read(unsigned short port, unsigned short * data)
{
	if ((port & 1) != 0) return -1;//word access io address check: dword port base :0,2,4,6,8,A,C

#if LINUX_OS
	* data = inw(port);
#endif

	return 0;
}
//double word 32 bit access out to uint32_t data
int Cio::read(unsigned short port, unsigned int * data)
{
	if ((port & 3) != 0) return -1;//dword access io address check: dword port base :0,4,8,C

#if LINUX_OS
	* data = inl(port);
#endif

	return 0;
}
//quad word sh64 bit access out to uint64_t data
int Cio::read(unsigned short port, unsigned long long * data)
{
	if ((port & 3) != 0|| port+4 >= 0xFFFF) return -1;//qword access io address check: dword port base :0,4,8,C

#if LINUX_OS
	* data = inl(port+4);
	* data = *data << 32;
	* data |= inl(port);
#endif
	return 0;
}
//8bit write 
int Cio::write(unsigned short port, unsigned char data)
{
#if LINUX_OS
	outb(data, port);
#endif
	return 0;
}
//word 16 bit access 
int Cio::write(unsigned short port, unsigned short data)
{
	if ((port & 1) != 0) return -1;//word access io address check: dword port base :0,2,4,6,8,A,C

#if LINUX_OS
	outw(data, port);
#endif
	return 0;
}
//double word 32 bit access uint32_t
int Cio::write(unsigned short port, unsigned int data)
{
	if ((port & 3) != 0) return -1;//dword access io address check: dword port base :0,4,8,C

#if LINUX_OS
	outl(data, port);
#endif
	return 0;
}
//quad word sh64 bit access 
int Cio::write(unsigned short port, unsigned long long data)
{
	if ((port & 3) != 0 || port + 4 >= 0xFFFF) return -1;//qword access io address check: dword port base :0,4,8,C

#if LINUX_OS
	outl((unsigned int)data, port);
	outl((unsigned int)(data>>32), port+4);
#endif
	return 0;
}

CioHwRw::CioHwRw()
{
	this->hw_addr_type = hw_reg_addr_type::io;
}
CioHwRw::~CioHwRw()
{

}

void CioHwRw::delay(int count)
{
	unsigned char data;
	do
	{
		this->read(0xB2, &data);//read 0xB2 io delay
	} while (--count > 0);
}
//8bit access 
int CioHwRw::byte_read(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;

	//int Cio::read(unsigned short port, unsigned char* data)
	return this->read((unsigned short)hw_reg->address, (unsigned char*)&hw_reg->read_data);
}
//word 16 bit access 
int CioHwRw::word_read(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;
	//int Cio::read(unsigned short port, unsigned short* data)
	return this->read((unsigned short)hw_reg->address, (unsigned short*)&hw_reg->read_data);
}
//double word 32 bit access 
int CioHwRw::dword_read(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;
	//int Cio::read(unsigned short port, unsigned int * data)
	return this->read((unsigned short)hw_reg->address, (unsigned int*)&hw_reg->read_data);
}
//quad word sh64 bit access 
int CioHwRw::qword_read(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;
	//int Cio::read(unsigned short port, unsigned long long * data)
	return this->read((unsigned short)hw_reg->address, (unsigned long long*)&hw_reg->read_data);
}
//8bit access 
int CioHwRw::byte_write(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;
//	int Cio::write(unsigned short port, unsigned char data)
	return this->write((unsigned short)hw_reg->address, (unsigned char) hw_reg->write_data);
}
//word 16 bit access 
int CioHwRw::word_write(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;
//	int Cio::write(unsigned short port, unsigned short data)
	return this->write((unsigned short)hw_reg->address, (unsigned short)hw_reg->write_data);
}
//double word 32 bit access 
int CioHwRw::dword_write(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;
	//int Cio::write(unsigned short port, unsigned int data)
	return this->write((unsigned short)hw_reg->address, (unsigned int)hw_reg->write_data);
}
//quad word sh64 bit access 
int CioHwRw::qword_write(hardware_register* hw_reg)
{
	if (this->hw_addr_type != hw_reg->type) return -1;
	//int Cio::write(unsigned short port, unsigned long long data)
	return this->write((unsigned short)hw_reg->address, (unsigned long long)hw_reg->write_data);
}

#ifndef IO_TEST
#define IO_TEST 0//1
#endif

#if IO_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "IO_TEST\n\n";

	return 0;
}
#endif 
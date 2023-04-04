#include "cmos.h"
int Ccmos::my_init(void *p)
{
	this->name = "Ccmos";
	this->alias = "cmos";
	return 0;
}

Ccmos::Ccmos()
{
	this->my_init();
}

Ccmos::~Ccmos()
{

}
//8bit access out to uint8_t data
int Ccmos::read(unsigned char index, unsigned char* data)
{
//int Cio::read(unsigned short index_port, unsigned char index, unsigned short data_port, unsigned char* data)
	if (index < 0x80) //intel PCH
	{
		return Cio::read((unsigned short)0x70, index, (unsigned short)0x71, data);
	}

	return Cio::read((unsigned short)0x80, index, (unsigned short)0x81, data);
}
//8bit access 
int Ccmos::write(unsigned char index, unsigned char data)
{
//	int Cio::write(unsigned short index_port, unsigned char index, unsigned short data_port, unsigned char data)
	if (index < 0x80) //intel PCH
	{
		return Cio::write((unsigned short)0x70, index, (unsigned short)0x71, data);
	}

	return Cio::write((unsigned short)0x80, index, (unsigned short)0x81, data);
}

#ifndef CMOS_TEST
#define CMOS_TEST 0//1
#endif

#if CMOS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif

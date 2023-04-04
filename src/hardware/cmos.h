#ifndef CMOS_H
#define CMOS_H

#include "../object.h"
#include "io.h"

namespace n_cmos {
	class Ccmos :public Object
	{
	public:
		Ccmos();
		~Ccmos();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccmos); }
		int read(unsigned char index, unsigned char* data);//8bit access out to uint8_t data
		int write(unsigned char index, unsigned char data);//8bit access 
	};
}

using namespace n_cmos;

#endif

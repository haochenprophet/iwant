#ifndef CMOS_H
#define CMOS_H

#include "../object.h"
#include "io.h"

namespace n_cmos {

	class CcmosActionParameter
	{
	public:
		CcmosActionParameter();
	public:
		int index;
		int data;
		int start;//dump
		int end;//end
	};

	class Ccmos :public Object
	{
	public:
		CcmosActionParameter cmos_action_parameter;
	public:
		Ccmos();
		~Ccmos();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccmos); }
		int read(unsigned char index, unsigned char* data);//8bit access out to uint8_t data
		int write(unsigned char index, unsigned char data);//8bit access 
		int read_cmd(unsigned char index);
		int read_cmd();
		int do_action(void* a = nullptr);
		int set_action_parameter(int argc, char* argv[]);
		int deal_cmd(int argc, char *argv[]);
	};
}

using namespace n_cmos;

#endif

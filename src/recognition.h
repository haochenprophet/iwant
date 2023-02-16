#ifndef RECOGNITION_H
#define RECOGNITION_H

#include "object.h"

namespace n_recognition {

	typedef int (*data_infor_func)(void* input,void *output);
	typedef long long base_address_type;

	enum class granularity_type//data_information_access_mode 
	{
		none  = 0,
		bit   = 1, //bit  1 bit 
		byte  = 8, //byte 8  bit access 
		word  = 16,//word 16 bit access 
		dword = 32,//double word 32 bit access 
		qword = 64,//quad word   64 bit access 
	};

	//data[n] =[ base + start/offset]  to [base + end/length ]
	typedef struct data_information_struct  //Generic or common data information
	{
		granularity_type type;
		union base_address //base address of data start
		{
			void* address;
			base_address_type base;
		};

		union start_address //memory address start of data=> unsigned char * 
		{
			void* address;
			int  offset;
		};

		union end_address
		{
			void* address;//memory address start of data=> unsigned char * 
			int  length;
		};

		void * information; //point information data struct
		char * description;//information description
		int count;//information struct count 
	}data_information;

	class Cdata_information
	{
	public:
		data_information * infor;
	public:
		Cdata_information();
	};

	class Crecognition :public Object
	{
	public:
		Crecognition();
		~Crecognition();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crecognition); }
	};
}

using namespace n_recognition;

#endif

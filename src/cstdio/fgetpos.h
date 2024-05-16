#ifndef FGETPOS_H
#define FGETPOS_H

#include "object/object.h"

namespace n_fgetpos {
	class Cfgetpos :public Object
	{
	public:
		Cfgetpos();
		~Cfgetpos();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfgetpos); }
		static int fgetpos_c(FILE* stream, fpos_t* pos);
	};
}

using namespace n_fgetpos;

#endif

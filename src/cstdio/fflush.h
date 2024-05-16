#ifndef FFLUSH_H
#define FFLUSH_H

#include "object/object.h"

namespace n_fflush {
	class Cfflush :public Object
	{
	public:
		Cfflush();
		~Cfflush();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfflush); }
		static int fflush_c(FILE* stream);
	};
}

using namespace n_fflush;

#endif

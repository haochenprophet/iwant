#ifndef SCANF_H
#define SCANF_H

#include "object/object.h"

namespace n_scanf {
	class Cscanf :public Object
	{
	public:
		Cscanf();
		~Cscanf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cscanf); }
		static int scanf_c(const char* format, ...);

	};
}

using namespace n_scanf;

#endif

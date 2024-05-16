#ifndef FPRINTF_H
#define FPRINTF_H

#include "object/object.h"

namespace n_fprintf {
	class Cfprintf :public Object
	{
	public:
		Cfprintf();
		~Cfprintf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfprintf); }
		static int fprintf_c(FILE* stream, const char* format, ...);

	};
}

using namespace n_fprintf;

#endif

#ifndef SPRINTF_H
#define SPRINTF_H

#include "../object.h"

namespace n_sprintf {
	class Csprintf :public Object
	{
	public:
		Csprintf();
		~Csprintf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Csprintf); }
		static int sprintf_c(char* str, const char* format, ...);

	};
}

using namespace n_sprintf;

#endif

#ifndef VSPRINTF_H
#define VSPRINTF_H

#include "../object.h"

namespace n_vsprintf {
	class Cvsprintf :public Object
	{
	public:
		Cvsprintf();
		~Cvsprintf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cvsprintf); }
		static int vsprintf_c(char* s, const char* format, va_list arg);

	};
}

using namespace n_vsprintf;

#endif

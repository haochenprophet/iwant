#ifndef VSSCANF_H
#define VSSCANF_H

#include "object/object.h"

namespace n_vsscanf {
	class Cvsscanf :public Object
	{
	public:
		Cvsscanf();
		~Cvsscanf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cvsscanf); }
		static int vsscanf_c(const char* s, const char* format, va_list arg);

	};
}

using namespace n_vsscanf;

#endif

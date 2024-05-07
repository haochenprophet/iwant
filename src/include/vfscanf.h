#ifndef VFSCANF_H
#define VFSCANF_H

#include "../object.h"

namespace n_vfscanf {
	class Cvfscanf :public Object
	{
	public:
		Cvfscanf();
		~Cvfscanf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cvfscanf); }
		static int vfscanf_c(FILE* stream, const char* format, va_list arg);

	};
}

using namespace n_vfscanf;

#endif

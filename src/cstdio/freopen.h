#ifndef FREOPEN_H
#define FREOPEN_H

#include "object/object.h"

namespace n_freopen {
	class Cfreopen :public Object
	{
	public:
		Cfreopen();
		~Cfreopen();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfreopen); }
		static FILE* freopen_c(const char* filename, const char* mode, FILE* stream);
	};
}

using namespace n_freopen;

#endif

#ifndef SETVBUF_H
#define SETVBUF_H

#include "object/object.h"

namespace n_setvbuf {
	class Csetvbuf :public Object
	{
	public:
		Csetvbuf();
		~Csetvbuf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Csetvbuf); }
		static int setvbuf_c(FILE* stream, char* buffer, int mode, size_t size);


	};
}

using namespace n_setvbuf;

#endif

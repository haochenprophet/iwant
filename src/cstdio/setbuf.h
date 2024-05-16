#ifndef SETBUF_H
#define SETBUF_H

#include "object/object.h"

namespace n_setbuf {
	class Csetbuf :public Object
	{
	public:
		Csetbuf();
		~Csetbuf();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csetbuf); }
		static void setbuf_c(FILE* stream, char* buffer);

	};
}

using namespace n_setbuf;

#endif

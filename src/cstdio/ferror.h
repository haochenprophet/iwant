#ifndef FERROR_H
#define FERROR_H

#include "object/object.h"

namespace n_ferror {
	class Cferror :public Object
	{
	public:
		Cferror();
		~Cferror();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cferror); }
		static int ferror_c(FILE* stream);
	};
}

using namespace n_ferror;

#endif

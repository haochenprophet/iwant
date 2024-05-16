#ifndef PERROR_H
#define PERROR_H

#include "object/object.h"

namespace n_perror {
	class Cperror :public Object
	{
	public:
		Cperror();
		~Cperror();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cperror); }
		static void perror_c(const char* str);

	};
}

using namespace n_perror;

#endif

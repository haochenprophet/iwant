#ifndef SRAND_H
#define SRAND_H

#include "object/object.h"

namespace n_srand {
	class Csrand :public Object
	{
	public:
		Csrand();
		~Csrand();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Csrand); }
		static void srand_c(unsigned int seed);

	};
}

using namespace n_srand;

#endif

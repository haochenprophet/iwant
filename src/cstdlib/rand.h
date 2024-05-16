#ifndef RAND_H
#define RAND_H

#include "object/object.h"

namespace n_rand {
	class Crand :public Object
	{
	public:
		Crand();
		~Crand();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Crand); }
		static int rand_c(void);
	};
}

using namespace n_rand;

#endif

#ifndef RAND_H
#define RAND_H

#include "../object.h"

namespace n_rand {
	class Crand :public Object
	{
	public:
		Crand();
		~Crand();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Crand); }
	};
}

using namespace n_rand;

#endif

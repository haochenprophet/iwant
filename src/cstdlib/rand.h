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
	};
}

using namespace n_rand;

#endif

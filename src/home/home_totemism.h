#ifndef HOME_TOTEMISM_H
#define HOME_TOTEMISM_H

#include "object/object.h"

namespace n_home_totemism {
	class Chome_totemism :public Object
	{
	public:
		Chome_totemism();
		~Chome_totemism();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_totemism); }
	};
}

using namespace n_home_totemism;

#endif

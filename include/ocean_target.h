#ifndef OCEAN_TARGET_H
#define OCEAN_TARGET_H

#include "../object.h"

namespace n_ocean_target {
	class Cocean_target :public Object
	{
	public:
		Cocean_target();
		~Cocean_target();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_target); }
	};
}

using namespace n_ocean_target;

#endif

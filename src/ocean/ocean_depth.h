#ifndef OCEAN_DEPTH_H
#define OCEAN_DEPTH_H

#include "object/object.h"

namespace n_ocean_depth {
	class Cocean_depth :public Object
	{
	public:
		Cocean_depth();
		~Cocean_depth();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_depth); }
	};
}

using namespace n_ocean_depth;

#endif

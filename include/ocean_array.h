#ifndef OCEAN_ARRAY_H
#define OCEAN_ARRAY_H

#include "../object.h"

namespace n_ocean_array {
	class Cocean_array :public Object
	{
	public:
		Cocean_array();
		~Cocean_array();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_array); }
	};
}

using namespace n_ocean_array;

#endif

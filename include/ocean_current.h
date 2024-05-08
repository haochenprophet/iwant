#ifndef OCEAN_CURRENT_H
#define OCEAN_CURRENT_H

#include "../object.h"

namespace n_ocean_current {
	class Cocean_current :public Object
	{
	public:
		Cocean_current();
		~Cocean_current();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_current); }
	};
}

using namespace n_ocean_current;

#endif

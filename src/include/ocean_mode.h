#ifndef OCEAN_MODE_H
#define OCEAN_MODE_H

#include "../object.h"

namespace n_ocean_mode {
	class Cocean_mode :public Object
	{
	public:
		Cocean_mode();
		~Cocean_mode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_mode); }
	};
}

using namespace n_ocean_mode;

#endif

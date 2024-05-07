#ifndef OCEAN_MAGNETIC_H
#define OCEAN_MAGNETIC_H

#include "../object.h"

namespace n_ocean_magnetic {
	class Cocean_magnetic :public Object
	{
	public:
		Cocean_magnetic();
		~Cocean_magnetic();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_magnetic); }
	};
}

using namespace n_ocean_magnetic;

#endif

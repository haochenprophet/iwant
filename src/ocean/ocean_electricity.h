#ifndef OCEAN_ELECTRICITY_H
#define OCEAN_ELECTRICITY_H

#include "../object.h"

namespace n_ocean_electricity {
	class Cocean_electricity :public Object
	{
	public:
		Cocean_electricity();
		~Cocean_electricity();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_electricity); }
	};
}

using namespace n_ocean_electricity;

#endif

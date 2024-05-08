#ifndef OCEAN_SEAWATER_H
#define OCEAN_SEAWATER_H

#include "../object.h"

namespace n_ocean_seawater {
	class Cocean_seawater :public Object
	{
	public:
		Cocean_seawater();
		~Cocean_seawater();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_seawater); }
	};
}

using namespace n_ocean_seawater;

#endif

#ifndef OCEAN_INFRARED_H
#define OCEAN_INFRARED_H

#include "../object.h"

namespace n_ocean_infrared {
	class Cocean_infrared :public Object
	{
	public:
		Cocean_infrared();
		~Cocean_infrared();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_infrared); }
	};
}

using namespace n_ocean_infrared;

#endif

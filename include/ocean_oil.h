#ifndef OCEAN_OIL_H
#define OCEAN_OIL_H

#include "../object.h"

namespace n_ocean_oil {
	class Cocean_oil :public Object
	{
	public:
		Cocean_oil();
		~Cocean_oil();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_oil); }
	};
}

using namespace n_ocean_oil;

#endif

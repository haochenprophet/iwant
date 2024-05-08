#ifndef OCEAN_TYPE_H
#define OCEAN_TYPE_H

#include "../object.h"

namespace n_ocean_type {
	class Cocean_type :public Object
	{
	public:
		Cocean_type();
		~Cocean_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_type); }
	};
}

using namespace n_ocean_type;

#endif

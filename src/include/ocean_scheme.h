#ifndef OCEAN_SCHEME_H
#define OCEAN_SCHEME_H

#include "../object.h"

namespace n_ocean_scheme {
	class Cocean_scheme :public Object
	{
	public:
		Cocean_scheme();
		~Cocean_scheme();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_scheme); }
	};
}

using namespace n_ocean_scheme;

#endif

#ifndef OCEAN_CHECK_H
#define OCEAN_CHECK_H

#include "../object.h"

namespace n_ocean_check {
	class Cocean_check :public Object
	{
	public:
		Cocean_check();
		~Cocean_check();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_check); }
	};
}

using namespace n_ocean_check;

#endif

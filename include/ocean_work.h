#ifndef OCEAN_WORK_H
#define OCEAN_WORK_H

#include "../object.h"

namespace n_ocean_work {
	class Cocean_work :public Object
	{
	public:
		Cocean_work();
		~Cocean_work();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_work); }
	};
}

using namespace n_ocean_work;

#endif
